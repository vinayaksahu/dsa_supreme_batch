#include<iostream>
using namespace std;

int main() {
    
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int r = 3;
    int c = 3;

    cout << "Given array:" << endl;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    cout << "Array transpose: " << endl;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    return 0;
}
