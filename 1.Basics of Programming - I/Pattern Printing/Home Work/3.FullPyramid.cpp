#include<iostream>
using namespace std;

int main() {
    
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            cout << " "; // inverted left pyramid
        }
        
        for (int j = 0; j < i; j++) {
            cout << "*"; // Left pyramid
            cout << " "; // with space = Full Pyramid
        } cout << endl;
           
    }

    return 0;
}

/*
   * 
  * * 
 * * * 
* * * * 
*/