#ifndef QUALIFYINGSET_H
#define QUALIFYINGSET_H

#include <iostream>
#include <string>

class QualifyingSet{
	public:
		int ft_hex_to_dec(std::string num);
		int ft_char_to_bin(int letter);
		int reduce_len_8_to_6(int num);
		int binary_to_decimal(int num);
		char decimal_to_b64_char(int num);
		std::string ft_dex_to_base64(int num);

};

#endif
