#include<iostream>
using namespace std;

int* f()
{
	int* list = new int[4] { 1,2,3,4 };
	//只要new，就会返回指针，左值必为指针.
	return list;
}
int main()
{
	int* p = f();//如果不new，该语句结束后，会自动释放内存，使得p变为野指针.
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[]p;
	return 0;
}