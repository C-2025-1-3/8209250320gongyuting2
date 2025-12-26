#include<iostream>
using namespace std;
void sortArray(int* arr, int n) {
    if (arr == nullptr || n <= 1) return;
    // 冒泡排序
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) { 
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
int main() {
    int n;
    cout << "请输入数组元素个数：";
    cin >> n;

    // 动态分配数组内存
    int* arr = new int[n];
    if (arr == nullptr) { 
        cout << "内存分配失败！" << endl;
        return 1;
    }
    cout << "请输入" << n << "个整数：";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i); // 指针方式输入
    }
    // 输出指针及指针指向的内容
    cout << "\n数组指针地址：" << arr << endl;
    cout << "排序前数组元素：";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " "; 
    }
    cout << endl;
    sortArray(arr, n);
    cout << "排序后数组元素：";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;
    arr = nullptr; // 避免野指针
    return 0;
}