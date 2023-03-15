#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<vector<int>> arr, int m, int n) {

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "  ";   
        }   cout << endl;
    } cout << endl;
}

void spiral(vector<vector<int>> mat, int m, int n) {

    vector<vector<int>> spiral(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            spiral[i][j] = mat[j][i];
        }   
    }

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
    printArray(mat, row, col);

    cout <<"After Spiral: " << endl;
    spiral(mat, row, col);

    return 0;
}