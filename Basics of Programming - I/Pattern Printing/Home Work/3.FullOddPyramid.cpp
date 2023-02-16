#include<iostream>
using namespace std;

int main() {
    
    int n = 5;

    for (int i = 0; i < n; i++) {
        int k = 0;
        for (int j = 0; j < 2*n-1; j++) {
            if (j < n-i-1) {
                cout << " ";
            }
            else if (k < 2*i+1) {
                cout << "*";
                k++;
            }
            else
                cout << " ";
        } 
        cout << endl;
    }
    
/* 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            cout << " "; // left inverted spaces pyramid ..
        } 
        for (int j = 0; j < i+1; j++) {
            cout << "*"; // .. + left star pyramid = right star pyramid + ...
        }
        for (int j = 0; j < i; j++) {
            cout << "*"; // ... + left star pyramid = full star pyramid
        }
        
        cout << endl;
    }
*/
    return 0;
}


/*

    *     
   ***   
  *****  
 ******* 
*********
*/