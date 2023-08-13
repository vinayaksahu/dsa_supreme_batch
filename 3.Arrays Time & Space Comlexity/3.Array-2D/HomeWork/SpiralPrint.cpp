#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>> arr, int m, int n) {

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "  ";   
        }   cout << endl;
    } cout << endl;
}

void spiral(vector<vector<int>> mat, int i, int j, int m, int n) {

    // If i or j lies outside the matrix
    if (i >= m or j >= n)
        return;
 
    // Print First Row
    for (int p = j; p < n; p++)
        cout << mat[i][p] << " ";
 
    // Print Last Column
    for (int p = i + 1; p < m; p++)
        cout << mat[p][n - 1] << " ";
 
    // Print Last Row, if Last and
    // First Row are not same
    if ((m - 1) != i)
        for (int p = n - 2; p >= j; p--)
            cout << mat[m - 1][p] << " ";
 
    // Print First Column,  if Last and
    // First Column are not same
    if ((n - 1) != j)
        for (int p = m - 2; p > i; p--)
            cout << mat[p][j] << " ";
 
    print(mat, i + 1, j + 1, m - 1, n - 1);

    //print 
    printArray(spiral, m, n);
}

int main () {

    vector<vector<int>> mat{{1,  2,  3,  4},
                            {5,  6,  7,  8},
                            {9,  10, 11, 12},
                            {13, 14, 15, 16}};

    int row = mat.size();
    int col = mat[0].size();

    cout <<"Before Spiral: " << endl;
    print(mat, row, col);

    cout <<"After Spiral: " << endl;
    spiral(mat, 0, 0, row, col);

    return 0;
}