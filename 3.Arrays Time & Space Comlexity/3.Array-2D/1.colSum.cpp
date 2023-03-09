#include<iostream>
using namespace std;

int main() {

    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {1, 4, 7, 0},
                     {9, 6, 3, 2}};
    int row = 4;
    int col = 4;

    //print
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] <<" ";
        } cout << endl;
    }

    cout << "print row sum:"<<endl;
    //print row sum
    for (int i = 0; i < row; i++) {
        int sum = 0;
        int j;
        for (j = 0; j < col; j++) {
            sum = sum + arr[j][i];
            
        } cout << "col " << i << " -> " << sum << endl;
    }

    return 0;
}