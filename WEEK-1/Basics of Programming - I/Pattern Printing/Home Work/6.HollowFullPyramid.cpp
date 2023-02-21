#include<iostream>
using namespace std;

int main() {
    
    int n = 15;

/*     for (int i = 0; i < n; i++) {
        int k = 0;
        for (int j = 0; j < 2*n-1; j++) {
            if (j < n-i-1) {
                cout << " ";
            }
            else if (k < 2*i+1) {
                if (k == 0 || k == 2*i || i == n-1)
                    cout << "*";
                else
                    cout << " ";
                k++;
            }
            else
                cout << " ";
        } 
        cout << endl;
    } */
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            cout << " "; // left inverted spaces pyramid ..
        } 
        for (int j = 0; j < i+1; j++) {
            if (j == 0 || i == n-1)
                cout << "*"; // .. + left star pyramid = right star pyramid + ...
            else
                cout << " ";
        }
        for (int j = 0; j < i; j++) {
            if (j == i-1 || i == n-1)
                cout << "*"; // ... + left star pyramid = full star pyramid
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
*********
*/