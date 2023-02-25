#include<iostream>
using namespace std;

int main() {
    
    int n = 5;

        //Upper
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        for (int j = 0; j < i+1; j++) {
            if (j == 0)
                cout << "*";
            else
                cout << " ";
        }
        for (int j = 0; j < i; j++) {
            if (j == i-1)
                cout << "*";
            else    
                cout << " ";
        }  cout << endl;    
    }
        //Lower
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < i+1; j++) {
            cout << " ";
        }
        for (int j = 0; j < n-i-1; j++) {
            if (j == 0 || j == n-i-1)
                cout << "*";
            else
                cout << " ";
        }
        for (int j = 0; j < n-i-2; j++) {
            if (j == n-i-3)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;    
    }
    
    return 0;
}

/*

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

*/
