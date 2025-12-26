#include<iostream>
#include<cstdlib>
using namespace std;
int gcd(int x, int y) {
	x = abs(x);
	y = abs(y);
	while (y != 0) {
		int z = x % y;
		x = y;
		y = z;
	}
	return x;
}
void computegcdlcm(int x, int y,int &gcdResult,int &lcmResult) {
	gcdResult = gcd(x, y);
	int num1 = abs(x);
	int num2 = abs(y);
	if (num1 == 0 || num2 == 0) {
		lcmResult = 0;
	}
	else {
		lcmResult = (num1 * num2 ) / gcdResult;
	}
}
int main() {
	int a, b;
	int gcd1, lcm2;
	cout <<  "请输入两个大于零的整数：" << endl;
	cin >> a >> b;
	if (a == 0 || b == 0) {
		cout << "不合法" << endl;
		return 1;
	}
	else {
		gcd(a, b);
		cout << "最大公约数：" << gcd(a, b) << endl;
	}
	computegcdlcm(a, b,gcd1,lcm2);
	cout << "最大公约数：" << gcd1 << endl;
	cout << "最小公倍数：" << lcm2 << endl;
	return 0;
}