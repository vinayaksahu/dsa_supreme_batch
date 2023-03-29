#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr) {
    for (auto &val : arr)
        cout << val << " ";
    cout << endl;
}

void bubbleSort(vector<int> arr) {
    
    int n = arr.size();
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap (arr[j], arr[j+1]);

    //print
    printArray(arr); 
}    

int main () {

    vector<int> arr{1,4,5,2,3,6,9,8,7};

    //sort
    bubbleSort(arr);

    return 0;
}