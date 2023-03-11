#include<iostream>
#include<limits.h>
using namespace std;

int transpose(int a[][3], int m, int n) {

    int maxi = INT_MIN;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            swap(a[i][j], a[j][i]); 
        }
    }

    //print 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j]; 
        } cout << endl;
    }

}

int main() {

    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j]; 
        } cout << endl;
    }cout << endl;

    transpose(arr, 3, 3);

    return 0;
}