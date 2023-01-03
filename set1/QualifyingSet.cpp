#include "QualifyingSet.h"

int QualifyingSet::ft_hex_to_dec(std::string num){
	int string_len = num.length();
	int base = 1;
	int temp = 0;
	for (int i = string_len - 1; i>= 0; i--)
	{
		if (num[i] >= '0' && num[i] <= '9')
		{
			temp += (num[i] - 48) * base;
			base = base * 16;
		}
		else if (num[i] >= 'A' && num[i] <= 'F')
		{
			temp += (num[i] - 55) * base;
			base = base * 16;
		}
	}
	return temp;
}

int	QualifyingSet::ft_char_to_bin(int letter){
	if (letter / 2 != 0)
		ft_char_to_bin(letter / 2);
	return letter;
}

int	QualifyingSet::binary_to_decimal(int num){
	int base = 1;
	int rem = 0;
	int res = 0;
	while (num > 0){
		rem = num / 10;
		res = res + rem * base;
		num = num / 10;
		base = base *2;
	}
	return res;
}

int	QualifyingSet::reduce_len_8_to_6(int num)
{
	num = num / 10;
	num = num / 10;
	return num;
}

char QualifyingSet::decimal_to_b64_char(int num){
	char res = '\0';
	if (num >= 0 && num < 26)
		res = 'A' + num;
	else if (num >= 26 && num < 52)
		res = 'a' + num - 26;
	else if (num >= 52 && num < 62)
		res = '0' + num - 52;
	else if (num == 62)
		res = '+';
	else if (num == 63)
		res = '/';
	return res;
}

std::string QualifyingSet::ft_dex_to_base64(int num){
	std::string result;
	std::string temp_string = std::to_string(num);
	int bin_char;
	int dec_char;
	for (int i = 0; i < (int)temp_string.length(); i++)
	{
		bin_char = ft_char_to_bin(temp_string[i]);
		bin_char = reduce_len_8_to_6(bin_char);
		dec_char = binary_to_decimal(bin_char);
		result.push_back(decimal_to_b64_char(dec_char));
	}
	return result;
}
