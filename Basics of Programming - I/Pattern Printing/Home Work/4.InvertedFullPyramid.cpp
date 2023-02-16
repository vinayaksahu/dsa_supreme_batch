#include<iostream>
using namespace std;

int main() {
    
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " "; // space left pyramid.. 
        }
        
        for (int j = 0; j < n-i; j++) {
            cout << "*"; // .. + inverted Left Half Pyramid ...
            cout << " "; // ... +(space) = Iverted Full Pyramid
        } cout << endl;
    }
    
    return 0;
}

/*
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
*/