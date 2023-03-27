#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr) {
    for(auto val : arr) {
        cout << val << " ";
    }
}

void rotateArray(vector<int> arr, int n) {

    int firstElement = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = firstElement;

    //print
    printArray(arr);
}

int main () {

    vector<int> arr{1,2,3,4,5,6,7,8,9};
    int size = arr.size();
    //rotate array by one element
    rotateArray(arr, size);

    return 0;
}