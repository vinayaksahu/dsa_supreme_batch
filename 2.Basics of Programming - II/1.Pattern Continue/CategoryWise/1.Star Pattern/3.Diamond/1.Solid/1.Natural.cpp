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
   
    for (int i = 0; i < 2*n-1; i++) {

        int cond = 0;

        if (i < n)
            cond = i + 1;
        else    
            cond = n - (i % n) - 1;

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