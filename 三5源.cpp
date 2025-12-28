#include<iostream>
using namespace std;
//int main()
//{
//	int n = 1;
//	for (int d = 10; d > 0; d--)
//	{
//		n = 2 * (n + 1);
//	}
//	cout << n;
//}

int f(int d) 
{
	if (d == 10)return 1;
	else
	{
		return (f(d + 1)+1) * 2 ;
	}
}
int main()
{
	int total = f(1);
	cout << total;
}