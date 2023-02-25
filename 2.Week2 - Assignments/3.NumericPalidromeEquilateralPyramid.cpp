#include<iostream>
using namespace std;

int main() {
    
    int n = 5;
    //For Loop method
/* 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            cout << "_ ";  
        }
        for (int j = 0; j < i+1; j++) {
            cout << j+1 << " ";  
        }
        int count = i;
        for (int j = 0; j < i; j++) {
            cout << count << " ";
            count--;  
        }
        
        cout << endl;
    } 
*/
    //If else
    int k = n;
    for (int i = 0; i < n; i++) {
        int c = 1;
        int d = i;
        for (int j = 0; j < k; j++) {
            if (j < n-i-1)
                cout << "  ";
            else if (j < n) {
                cout << c << " ";
                c++;
            }
            else if (j < k) {
                cout << d << " ";
                d--;
            }
            
        }
        k++;
        cout << endl;
    }
    
    return 0;
}


/*

        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/
