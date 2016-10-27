#ifndef SERVER_CONN_H
#define SERVER_CONN_H
#include <string>

class ServerConnException: public std::exception {
public:
    ServerConnException (std::string r): _reason{r}{    }
    ~ServerConnException () throw() { }

    const char* what() const noexcept {
        return _reason.c_str();
    }

private:
    std::string _reason;

};

class ServerConnInt{

public:


    virtual void connect()=0;
    void connect(std::string ip_address){
        setIp (ip_address);
        connect();
    }

    virtual void disconnect()=0;
    void setIp (std::string ip_address) {
        _ip_address = ip_address;
    }


protected:
    int _port=2304;
    std::string _ip_address;

};

#endif // SERVER_CONN_H

