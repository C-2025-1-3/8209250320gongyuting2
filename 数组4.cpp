#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0, j = 0, k = 0;
	while (i < size1 && j < size2)
	{
		if (list1[i] <= list2[j])
		{
			list3[k++] = list1[i++];//先取值，后自增！！此处i++，会让while循环里的i变化。
		}
		else {
			list3[k++] = list2[j++];
		}
	}
	while (i < size1) {
		list3[k++] = list1[i++];
	}
	while (j < size2) {
		list3[k++] = list2[j++];
	}
}
int main()
{
	const int MAX_SIZE = 80;//！！
	int list1[MAX_SIZE], list2[MAX_SIZE], list3[MAX_SIZE * 2];//！！*2
	int size1, size2;
	int list1[80];
	cout << "请输入第一个排列好的数组元素个数：";
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "请输入第二个排列好的数组元素个数：";
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);
	cout << "new 数组:";
	for (int num : list3)
	{
		cout << num << " ";
	}
}