#include<iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) { //row count
        for (int j = 0; j < n-i; j++) { // in every row print * according to number of row
            cout << "*";
        } cout << endl; //new line
    }
    return 0;
}
