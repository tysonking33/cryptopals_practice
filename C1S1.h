#ifndef C1S1_H
#define C1S1_H

#include <string>

class C1S1{
public:
    std::string base_to_base(std::string hex_str, int base);
    char ret_char_val(int src);
    std::string str_rev(std::string src);
    std::string from_dec(int src, int base);
    int stringTointeger(std::string str);


};
#endif