#include "C1S1.h"
#include <iostream>
char C1S1::ret_char_val(int src){
    if ((src >= 0) && (src <= 9))
        return char(src) + '0';
    else
        return (char(src) - 10 + 'A');
}

std::string C1S1::str_rev(std::string src){
    int src_len = src.length();
    std::string dest;
    for (int i = 0; i < src_len; i++){
        dest.push_back(src[src_len - i]);
    }
    return dest;
}

std::string C1S1::from_dec(int src, int base){
    std::string rev_res;
    std::string res;
    int idx = 0;

    while (src > 0){
        res.push_back(ret_char_val(src % base));
        src /= base;
    }


    res = str_rev(res);

    return res;    
}

int C1S1::stringTointeger(std::string str)
{
    int temp = 0;
    for (int i = 0; i < str.length(); i++) {
 
        // Since ASCII value of character from '0'
        // to '9' are contiguous. So if we subtract
        // '0' from ASCII value of a digit, we get
        // the integer value of the digit.
        temp = temp * 10 + (str[i] - '0');
    }
    return temp;
}


std::string C1S1::base_to_base(std::string hex_str, int base){
    int src = stringTointeger(hex_str);
    std::string str1 = from_dec(src, 10);

    std::cout <<str1 << std::endl;
    int src2 = stringTointeger(str1);
    std::string str2 = from_dec(src2, 10);

    return str2;
}