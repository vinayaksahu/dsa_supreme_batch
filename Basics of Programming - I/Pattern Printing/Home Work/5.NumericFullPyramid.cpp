#include<iostream>
using namespace std;

int main() {
    
    int n = 5;

    for (int i = 0; i < n; i++) {
        //spaces
        for (int j = 0; j < n-i; j++) { 
            cout << " ";
        }
 
        //numbers
        for (int j = 0; j < i+1; j++) { 
            cout << i+j+1;
        }

        //reverse counting
        int start = 2*i;
        for (int k = 0; k < i; k++) { 
            cout << start;
            start--;
        }
        cout << endl;
    }

    return 0;
}
