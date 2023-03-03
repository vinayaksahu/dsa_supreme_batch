#include <iostream>
using namespace std;

int getSum (int a, int b) {
    return a+b;
}

int main () {
    int num1 = 2;
    int num2 = 3;

    cout << getSum (num1, num2);

    return 0;
}