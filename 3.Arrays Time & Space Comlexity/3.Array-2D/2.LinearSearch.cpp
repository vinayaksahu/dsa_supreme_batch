#include<iostream>
using namespace std;

bool findKey(int a[][3], int m, int n, int k) {

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(a[i][j] == k)
                return true;
        }       
    }

    return false;
    
}

int main() {

    int arr[3][3] = {{1, 2 ,3},
                     {4, 5, 6},
                     {7, 8 ,9}};

    int row = 3;
    int col = 3;

    int key = 47;

    bool presentOrNot= findKey(arr, row, col, key);

    if(presentOrNot)
        cout << "Key is present";
    else    
        cout << "Key is not present";

    return 0;
}