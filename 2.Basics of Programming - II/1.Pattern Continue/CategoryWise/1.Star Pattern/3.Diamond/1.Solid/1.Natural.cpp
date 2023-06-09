#include<iostream>
using namespace std;

int main() {
    
    int n = 5;
/* 
        //Upper
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        for (int j = 0; j < i+1; j++) {
            cout << "* ";
        } cout << endl;    
    }
        //Lower
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < i+1; j++) {
            cout << " ";
        }
        for (int j = 0; j < n-i-1; j++) {
            cout << "* ";
        } cout << endl;    
    }
   */  
   
    for (int i = 0; i < 2*n; i++) {
        int cond = (i < n) ? (i + 1) : (n - (i % n) - 1);

        for (int j = 0; j < n - cond; j++) {
            cout << " ";
        }
        
        for (int j = 0; j < cond; j++) {
            cout << "* ";
        } cout << endl;
    }

    return 0;
}
    

/*

    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/