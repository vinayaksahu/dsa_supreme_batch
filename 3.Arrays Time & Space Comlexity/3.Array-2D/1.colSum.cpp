#include<iostream>
using namespace std;

void printRowSum(int arr[][3], int m, int n) {

    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum = sum + arr[i][j];
        }   cout << "Row " << i << " :" << sum << endl;
    }
}

void printColSum(int arr[][3], int m, int n) {

    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum = sum + arr[j][i];
        }   cout << "Col " << i << " :" << sum << endl;
    }
}


int main () {

    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    int row = 3;
    int col = 3;
                    
    //given element
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] <<" ";            
        } cout << endl;
    }

    //print row sum
    printRowSum(arr, row, col);

    //print column sum
    printColSum(arr, row, col); 
}