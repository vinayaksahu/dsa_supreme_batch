#include<iostream>
using namespace std;

void print (int a) {

    ++a; //15
    a++; //16

    cout << a << endl; //16
    --a; //15
}

int main () {

    int a = 12;

    a++; //13
    ++a; //14

    print(a); //16 

    cout << a << endl; //14

    return 0;
}