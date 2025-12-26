#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	double C, F;
	cout << "请输入摄氏温度和华氏温度" << endl;
	cin >> C >> F;
	cout << "摄氏温度到华氏温度:" <<celsius_to_fah(C)<< endl;
	cout << "华氏温度到摄氏温度:" <<fahrenheit_to_cels(F)<<endl;
}
