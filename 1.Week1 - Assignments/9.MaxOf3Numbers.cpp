#include<iostream>
using namespace std;

int main() {
    
    int num1 = 3,
        num2 = 5,
        num3 = 2;
    
    if (num1 > num2 && num1 > num3)
        cout << num1;
    else if (num2 > num3 && num2 > num1)
        cout << num2;
    else //if (num3 > num2 && num3 > num1)
        cout << num3;
    
    return 0;
}
