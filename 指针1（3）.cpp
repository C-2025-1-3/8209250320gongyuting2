#include<iostream>
using namespace std;
void f(char* st, int i)
{
    st[i] = '\0';//×Ö·û´®½áÊø·û.
    cout << st << endl;;
    if (i > 1) f(st, i - 1);
}
int main()
{
    char st[] = "abcd";
    f(st, 4);
    return 0;
}