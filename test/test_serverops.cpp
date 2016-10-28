#include "gmock/gmock.h"
#include "server_conn.h"
#include "server_ops.h"
#include "json11.hpp"

using namespace std;
using ::testing::Return;                            
using ::testing::ContainerEq; 


class ServerConnMock: public ServerConnInt {
public:
	MOCK_METHOD0(connect, void());
	MOCK_METHOD0(disconnect, void());
	MOCK_METHOD1(requestUrl, string(string));
};


// test fixture 
class ServerFixture : public testing::Test {

public:
	ServerConnMock serverConn{};
	ServerOps serverOps{&serverConn};

	
};

#include <iostream>
TEST_F (ServerFixture, GetListOfInterfacesTypical) {
	// setup mock response
	using namespace json11;

	vector<string> mockItems{"eth0", "eth1", "eth2"};

	Json mockJsonResponse = Json::object {
	{ "is_success", true}, 
    { "count", 3 },
    { "items", Json(mockItems) },};	

	EXPECT_CALL(serverConn, requestUrl ("/get_list_of_interfaces"))
	.WillOnce(Return(mockJsonResponse.dump()));

	
	auto interfaceList = serverOps.getListOfInterfaces();

	EXPECT_THAT (interfaceList, ContainerEq(mockItems));	
	

}



TEST_F (ServerFixture, GetListOfInterfacesNotSuccess) {
	// setup mock response
	using namespace json11;
	
	string mockStatusMsg = "error getting list of interfaces";
	Json mockJsonResponse = Json::object {
	{ "is_success", false},
	{ "status_msg", mockStatusMsg},
	};	

	EXPECT_CALL(serverConn, requestUrl ("/get_list_of_interfaces"))
	.WillOnce(Return(mockJsonResponse.dump()));

	
	auto interfaceList = serverOps.getListOfInterfaces();

	EXPECT_THAT (interfaceList, ContainerEq(vector<string>{}));	 // should be empty
	
	

}

