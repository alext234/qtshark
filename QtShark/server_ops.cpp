#include "server_conn.h"
#include "server_ops.h"
#include <iostream>
#include "json11.hpp"

ServerOps::ServerOps(ServerConnInt* serverConn) : _serverConn{serverConn}{

}

ServerOps::~ServerOps() {

}

vector_str ServerOps::getListOfInterfaces() {

    using namespace json11;

    auto response = _serverConn->requestUrl ("/get_list_of_interfaces");

    // parse response and input to intfList
    std::string err;
    auto parsedResponse = Json::parse (response, err);
    vector_str intfList ;
    if (!err.empty()){
        // error parsing json
        return intfList;
    }

    auto count= static_cast<size_t>(parsedResponse["count"].int_value());
    auto items =parsedResponse["items"].array_items();
    auto numberOfItems = items.size();

    if (count!=numberOfItems){ // some inconsitency?
        return intfList;
    }

    intfList.reserve(count);
    for(auto &item : items) {
        intfList.push_back(item.string_value());
    }

    return intfList;

}
