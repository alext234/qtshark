#include "server_conn.h"
#include "server_ops.h"
#include <iostream>

ServerOps::ServerOps(ServerConnInt* serverConn) : _serverConn{serverConn}{

}

ServerOps::~ServerOps() {

}

vector_str ServerOps::getListOfInterfaces() {

    vector_str intfList ;

    auto response = _serverConn->requestUrl ("/get_list_of_interfaces");
    std::cout<<response<<std::endl;
    return intfList;


}
