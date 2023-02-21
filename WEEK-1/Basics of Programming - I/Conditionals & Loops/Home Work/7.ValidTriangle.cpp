#include<iostream>
using namespace std;

int main() {
    
    int a = 1,
        b = 2,
        c = 0.111;

    if (a + b >= c || b + c >= a || c + a >= b)
        cout << "Valid triangle";
    else
        cout << "Not valid";

    return 0;
}
