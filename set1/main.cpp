#include "QualifyingSet.h"

int main()
{
	QualifyingSet *QS = new QualifyingSet();
	std::string num = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
	std::cout << "orignal num: " << num <<  ",  base 10 ver: " << QS->ft_hex_to_dec(num) << std::endl;
	//std::string str_dec = std::to_string(QS->ft_hex_to_dec(num));
	std::cout << "base64 version: " << QS->ft_dex_to_base64(QS->ft_hex_to_dec(num)) << std::endl;
	return 0;
}
