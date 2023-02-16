#include<iostream>
using namespace std;

int main() {
    
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) { // Inverted Left Half Pyramid (j<n-i) with Space ..
            cout << " ";
        }
        for (int j = 1; j < i+1; j++) { // .. + Left Half Pyramid (j<i) = Right Pyramid
            cout << j;
        } cout << endl;
    }
        

    return 0;
}

/*
    1
   12
  123
 1234
*/