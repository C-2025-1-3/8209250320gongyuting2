#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char* s1, const char* s2)
{
	int len1 = strlen(s1);//not contain '\0'.
	int len2 = strlen(s2);
	if (len1 == 0 || len1 > len2)return -1;
	for (int i = 0; i <= len2 - len1; i++) {//如果主串剩余字符长度小于子串，无意义.
		int j = 0;
		for (; j < len1; j++) //j的重置，保证每次循环都从s1的第一个字符开始.
		{
			if (s2[i + j] != s1[j])
			{//i的实质，是主串领先子串的字符处.
				break;//end inside "for",outside continue.
			}
		}
		if (j == len1)return i;
	}
	return -1;
}
int main() {
	const char* s1 = "welcome";
	const char* s2 = "We welcome you";
	cout << indexOf(s1, s2);
	return 0;
}