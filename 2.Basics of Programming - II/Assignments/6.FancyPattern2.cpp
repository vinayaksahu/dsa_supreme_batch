#include<iostream>
using namespace std;

int main() {

    int n = 4;
    int c = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            if (j == 0)
                cout << c;
            else
                cout << "*" << c;
            c++;
        } cout << endl;
    }

    int start = c - n;
    for (int i = 0; i < n; i++) {
        int k = start;
        for (int j = 0; j < n-i; j++) {
            cout << k;
            k++;
            if (j < n-i-1)
                cout << "*";

        } cout << endl;
        start = start - (n - i - 1);
    }
    

    return 0;
}

/*

1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1

*/