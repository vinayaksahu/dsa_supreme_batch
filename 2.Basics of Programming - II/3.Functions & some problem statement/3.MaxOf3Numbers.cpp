#include <iostream>
using namespace std;

int max (int a, int b, int c) {

    if (a > b && a > c)
        return a;
    else if (b > c && b > a)
        return b;
    else if (c > a && c > b)
        return c;
}

int main () {

    int num1 = 10,
        num2 = 20,
        num3 = 30;

    cout << max(num1, num2, num3);

    return 0;
}