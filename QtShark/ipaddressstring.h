#ifndef __IP_ADDRESS_STRING__
#define __IP_ADDRESS_STRING__
#include <sstream>
#include <ctype.h>
#include <string>

class IpAddressString {
public:
    IpAddressString (std::string addr): _addr{addr} {}



    // verify to make sure it is of the form x.x.x.x
    bool isValidIpAddressString(){
        std::istringstream ss(_addr);
        std::string s_temp;
        for (int i=0; i<4; ++i){
            s_temp ="";
            std::getline(ss, s_temp,'.');

            if (s_temp==""){ // need 4 "."
                return false;
            }
            if (!isNumberString(s_temp)) {
                return false;
            }

        }

        return true;
    }

private:


    std::string _addr;

    bool isNumberString(const std::string& s){
        if (s.empty()) return false;


        // check individual digit
        for (auto it=s.begin(); it!=s.end(); ++it)    {
            if (!isdigit(*it)) return false;

        }
        int val = stoi(s);


        return val >=0 && val <=255;
    }

};



#endif //__IP_ADDRESS_STRING__
