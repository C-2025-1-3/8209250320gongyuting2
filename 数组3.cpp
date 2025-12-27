#include<iostream>
using namespace std;
int main()
{
	bool arr[100] = { false };
	for (int i = 0; i < 100; i++)
	{
		arr[i] = !arr[i];
	}
	for (int s = 2; s < 100; s++)
	{
		arr[s] = !arr[s];
		for (int L = s; L + s + 1 < 100; L = L + s + 1)
		{
			arr[L + s + 1] = !arr[L + s + 1];
		}
	}
	for (int i = 0; i < 100; i++)
	{
		cout << arr[i] << " ";
	}
}