#include<iostream>
using namespace std;

int main() {
    
    int n = 5;

    for (int i = 0; i < n; i++) {

        if (i == n-1) {
            for (int j = 0; j < n; j++) {
                cout << 2*j+1 << " ";
            }
        }
        
        else {
            for (int j = 0; j < 2*i+1; j++) {
                if (j == 0 || j == 2*i)
                    cout << j+1;
                else    
                    cout << " ";
            }
        } cout << endl;
        
    }
/*
1
1 3
1   5
1     7
1 3 5 7 9 
*/
    


/*     for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            if (i == n-1 || j == 0 || j == i) 
                cout << j+1<< " ";
            else
                cout << "  ";

        }
        cout << endl;
    }
     */

    return 0;
}


/*

1 
1 2
1   3
1     4
1 2 3 4 5

*/
