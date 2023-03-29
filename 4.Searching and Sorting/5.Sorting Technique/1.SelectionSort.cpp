#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr) {

    for (auto &val : arr)
        cout << val << " ";
    cout << endl;
}

void selectionSort(vector<int> arr) {

    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[min_idx] > arr[j])
                min_idx = j;
        }
        swap (arr[min_idx], arr[i]);
    }
    
    //print
    printArray(arr);
}
 
int main() {

    vector<int> arr{1,5,9,4,2,3,6,5,8};

    //sort
    selectionSort(arr);

    return 0;
}