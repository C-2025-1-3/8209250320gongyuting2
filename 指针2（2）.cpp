#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int parseHex(const char* const hexstring)
{
	int decimal = 0;
	int start = 0;
	int len = strlen(hexstring);
	if (len >= 2 && hexstring[0] == '0' && (hexstring[1] == 'x' || hexstring[1] == 'X'))//判断是否有0x（这是编程语言中16进制数的标志.
	{ start = 2; }
	for (int i = 0; i < len; i++)
	{
		char c = tolower(hexstring[i]);//遍历，统一转为小写.
		int val;
		if (c >= '0' && c <= '9') {
			val = c - '0';
		}
		else if (c >= 'a' && c <= 'f') {
			val = 10 + (c - 'a');
		}
		else { return 0; }//illegal string.
		decimal = decimal * 16 + val;//左位乘以16加上后一位，在计算后一位累加的时候才乘以16而已.
	}
	return decimal;
}
int main()
{
	int result = parseHex("A5");
	cout << result << endl;
	return 0;
}