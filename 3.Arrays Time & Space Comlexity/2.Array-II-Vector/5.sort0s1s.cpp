#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> ans) {

    for(auto val : ans) {
        cout << val << " ";
    } cout << endl;
}

void sortZeroOne(vector<int> arr) {

    int start = 0;
    int end = arr.size()-1;
    int i = 0;
    while (i != end) {
        if (arr[i] == 0) {
            swap(arr[start], arr[i]);
            start++;
            i++; 
        } else {
            swap(arr[end], arr[i]);
            end--;
        }
    }

    printArray(arr);   
    
}

int main() {    

    vector<int> arr{0,1,1,0,1,0,1,0,1,0,0,0,1,1,1,0,1,0,1,0,1,1,1,0,0,1};

    printArray(arr);

    //sort 0's ans 1's
    sortZeroOne(arr);

    return 0;
}