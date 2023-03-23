#include<iostream>
#include<vector>
using namespace std;

bool binarySearch2D(vector<vector<int> > arr, int key, int row, int col) {
    int s = 0;
    int e = row * col - 1;
    while(s <= e) {
        int mid = s + (e - s) / 2;
        int rowIndex = mid / col;
        int colIndex = mid % col;
        if(arr[rowIndex][colIndex] == key)
            return true;
        else if(arr[rowIndex][colIndex] < key)
            s = mid + 1; //search right
        else if(arr[rowIndex][colIndex] > key)
            e = mid - 1; //search left
    }
    return false;
} 

int main() {

    vector<vector<int> > arr{{1,2,3},
                             {4,5,6},
                             {7,8,9}};
    int key = 6;
    int row = arr.size();
    int col = arr[0].size();
    int ans = binarySearch2D(arr, key, row, col);
 
    if(ans)
        cout << "Found";
    else
        cout << "Not found";

    return 0;
}