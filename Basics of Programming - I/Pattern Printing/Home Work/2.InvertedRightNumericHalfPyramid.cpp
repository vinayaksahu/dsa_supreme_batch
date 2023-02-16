#include<iostream>
using namespace std;

int main() {
    
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) { // Left Pyramid (j<i) with space
            cout << " ";
        }

        for (int j = 1; j < n-i+1; j++) { // Inverted Left Pyramid (n-i)
            cout << j;
        } cout << endl;
    }

    return 0;
}

/*
12345
 1234
  123
   12
    1
*/