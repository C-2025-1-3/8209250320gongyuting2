#include<iostream>
#include<cctype>
using namespace std;
void count(const char s[], int counts[])
{
	for (int j = 0; j < 26; j++)
	{
		counts[j] = 0;//初始化，避免垃圾值.
	}
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if (isalpha(s[i]))//是否为字母.
		{
			char lower_ch = tolower(s[i]);//转换成小写.
			int index = lower_ch - 'a';
			counts[index]++;//第index项存储的值+1.
			//无需判断重复，只要字母相同，index一致，自动++.
		}
	}


}
int main()
{
	int counts[26];
	cout << "please enter a string:";
	char s[100];
	cin.getline(s,100);
	count(s,counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			cout << (char)('a' + i) << ":" << counts[i] <<"times" << endl;
		}
	}
	return 0;
}