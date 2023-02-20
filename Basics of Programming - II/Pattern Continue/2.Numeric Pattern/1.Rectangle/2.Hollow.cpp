#include<iostream>
using namespace std;

int main() {
    
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1)
                cout << i<<" ";
            else
                cout << "  ";
        } cout << endl;    
    }
    
    return 0;
}

/*

0 0 0 0 0 
1       1 
2       2 
3       3 
4 4 4 4 4 

*/