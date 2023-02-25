#include<iostream>
using namespace std;

int main() {
    
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " "; // space .. 
        }
        
        for (int j = 0; j < n-i; j++) {
            cout << "*"; // .. + n-i means Left Half Pyramid = Right Half Pyramid
        } cout << endl;
    }
    
    return 0;
}

/*
*****
 ****
  ***
   **
    *
*/