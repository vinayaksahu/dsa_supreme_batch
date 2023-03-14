#include<iostream>
#include<vector>
using namespace std;

void findRowSum(vector<vector<int>> arr, int m, int n) {

    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum = sum + arr[i][j];
        }   cout << "Row " << i << " :" << sum << endl;
    } cout << endl;
}

void findColSum(vector<vector<int>> arr, int m, int n) {

    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum = sum + arr[j][i];
        }   cout << "Col " << i << " :" << sum << endl;
    } cout << endl;
}

int main() {

    vector< vector<int> > arr{{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}};

    int row = arr.size();
    int col = arr[0].size();

    //print row sum
    findRowSum(arr, row, col);

    //find column sum
    findColSum(arr, row, col);

    return 0;
}