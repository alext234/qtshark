#ifndef SERVER_OPS
#define SERVER_OPS

#include <string>
#include "server_conn.h"
#include <vector>
#include <memory>

using vector_str = std::vector<std::string>;

class ServerOps {


public:

    ServerOps(ServerConnInt* serverConn);
    ~ServerOps();

    vector_str getListOfInterfaces();

private:
    ServerConnInt* _serverConn;

};

#endif // SERVER_OPS

