#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num) {
	if (num<=1) {
		return false;
	}
	if (num == 2) {
		return true;
	}
	if (num % 2 == 0) {
			return false;
	}
	for(int i=3;i<=sqrt(num);i+=2){
			if (num % i == 0)return false;
	}
	return true;
}
int main() {
	/*int a,b;
	cout << "请输入一个整数：" << endl;
	cin >> a;
	b=is_prime(a);
	if (b == 0) {
		cout << a << "不是素数" << endl;
	}
	else cout << a << "是素数" << endl;*/
	int count=0;
	for (int i = 1; i < 201; i++) {
		int c;
		c = is_prime(i);
		if (c != 0) {
			cout << i << '\t';
			count++;
			if (count % 10 == 0) {
				cout << '\n';
			}
		}
	}
	return 0;
}