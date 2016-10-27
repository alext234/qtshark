#include "gmock/gmock.h"
#include "server_conn.h"
#include "server_ops.h"
#include "json11.hpp"

using namespace std;
using ::testing::Return;                            


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

TEST_F (ServerFixture, GetListOfInterfacesTypical) {
	using namespace json11;
	Json mockJsonResponse = Json::object {
    { "count", 3 },
    { "items", Json::array { "eth0","eth1","eth2"} },};	

	EXPECT_CALL(serverConn, requestUrl ("/get_list_of_interfaces"))
	.WillOnce(Return(mockJsonResponse.dump()));
	
	auto interfaceList = serverOps.getListOfInterfaces();


}



