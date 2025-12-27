#include<iostream>
using namespace std;
void bubbleSort(double arr[], int len)
{
	for (int i = 0; i < len - 1; i++)//len-1!!!
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;

			}
		}
	}
}
int main()
{
	double arr[10] = { 1,5,9,13,6,4,17,3,11,0 };
	int len = sizeof(arr) / sizeof(arr[0]);//!!!
	bubbleSort(arr, len);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << ",";
	}
	return 0;
}