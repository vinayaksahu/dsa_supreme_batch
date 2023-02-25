#include<iostream>
using namespace std;

int main() {
    
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            if (i == 0 || j == 0 || j == n-i-1) 
                cout << j+1 << " ";
            else
                cout << "  ";

        }
        cout << endl;
    }
    

    return 0;
}


/*

1 2 3 4 5
1     4
1   3
1 2
1

*/
