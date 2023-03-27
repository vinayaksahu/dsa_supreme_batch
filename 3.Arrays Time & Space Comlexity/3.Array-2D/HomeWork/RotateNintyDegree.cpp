#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<vector<int>>& arr, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    } cout << endl;
}

void rotate90(vector<vector<int>>& mat, int m, int n) {

    //rotate 90 degree
    vector<vector<int>> rotate(3, vector<int>(3));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            rotate[i][j] = mat[j][n-1-i];
        }
    }

    //print
    cout << "After rotate: " << endl;
    printArray(rotate, m, n); 
    
}

int main() {

    vector<vector<int>> mat{{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    int row = mat.size();
    int col = mat[0].size();

    cout << "Before rotate: " << endl;
    printArray(mat, row, col); 

    rotate90(mat, row, col);
}