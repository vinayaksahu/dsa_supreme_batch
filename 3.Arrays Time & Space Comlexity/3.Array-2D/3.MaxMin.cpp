#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int a[][3], int m, int n) {

    int maxi = INT_MIN;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(a[i][j] > maxi)
                maxi = a[i][j]; 
        }
    }
    
    return maxi;
}

int findMin(int a[][3], int m, int n) {

    int mini = INT_MAX;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(a[i][j] < mini)
                mini = a[i][j]; 
        }
    }
    
    return mini;
}

int main() {

    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    int maxi = findMax(arr, 3, 3);
    int mini = findMin(arr, 3, 3);

    cout << "Maximum: "<< maxi << endl << "Minimum: " << mini << endl;

    return 0;
}