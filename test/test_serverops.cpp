#include "gmock/gmock.h"
#include "server_conn.h"
#include "server_ops.h"

class ServerConnMock: public ServerConnInt {
public:
	MOCK_METHOD0(connect, void());
	MOCK_METHOD0(disconnect, void());
};


// test fixture 
class ServerFixture : public testing::Test {
public:
	ServerConnMock serverConn{};
	ServerOps serverOps{&serverConn};
	
};

//TEST_F (ServerFixture, GetListOfInterfaces) {
//	
//	
//}
