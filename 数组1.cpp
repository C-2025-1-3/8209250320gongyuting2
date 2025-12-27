#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int same = 0;
	cout << "Enter ten numbers:";
	for (int x = 0; x < 10; x++)
	{
		cin>>a[x];
	}

	int b[10];
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		bool isreapt = false;
		for (int j = 0; j < count; j++)
		{
			if (a[i]==b[j])
			{
				isreapt = true;
				break;
			}
		}
		if (!isreapt)
		{
			b[count++] = a[i];
		}
	}

	cout << "The distinct numbers are: ";
	for (int i = 0; i < count; i++)
	{
		cout << b[i] << ",";
	}
	return 0;
}