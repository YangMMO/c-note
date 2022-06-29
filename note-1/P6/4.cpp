#include <iostream>
using namespace std;

/* 函数的常见样式 */

// 1. 无参无返
void test01() {
    cout << "test01：" << endl;
}

// 2. 有参无返
void test02(int a) {
    cout << "test02：" << a << endl;
}

// 3. 无参有返
int test03() {
    cout << "test03：" << endl;
    return 1000;
}

// 4. 有参有返
int test04(int a) {
    cout << "test04：" << a << endl;
    return a;
}

int main() {
    system("chcp 65001");

    // 1. 无参无返
    test01();

    // 2. 有参无返
    test02(100);


    // 3. 无参有返
    int num1 = test03();
    cout << "num1：" << num1 << endl;

    // 4. 有参有返
    int num2 = test04(10000);
    cout << "num2：" << num2 << endl;

    system("pause");
    return 0;
}
