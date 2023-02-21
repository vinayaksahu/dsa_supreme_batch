#include<iostream>
using namespace std;

int main() {
    
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            if (i == n-1 || j == 0 || j == i) 
                cout << j+1<< " ";
            else
                cout << "  ";

        }
        cout << endl;
    }
    

    return 0;
}


/*

1 
1 2
1   3
1     4
1 2 3 4 5

*/
