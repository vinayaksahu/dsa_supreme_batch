#include<iostream>
using namespace std;

int main() {

    int n = 5;

    for (int i = 0; i < 2*n; i++) {

        int cond = (i < n) ? (i + 1) : (n - (i % n));

        int space_count = (i < n) ? (2*(n - i - 1)) : (i - cond); 

        for (int j = 0; j < 2*n; j++) {

            if (j < cond)
                cout << "*";
                
            else if (space_count-- > 0)
                cout << " ";
                
            else
                cout << "*";

        } cout << endl;
    }

    return 0;
}