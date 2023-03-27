#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> ans) {

    for(auto val : ans) {
        cout << val << " ";
    }
}

void sortZeroOne(vector<int> arr) {

    //2 pointer approach
    int s = 0;
    int e = arr.size() - 1;
    int i = 0;
    while(s <= e) {
        if(arr[i] == 0) {
            swap(arr[i], arr[s]);
            i++;
            s++;
        } else {
            swap(arr[i], arr[e]);
            e--;
        }
    }

    //print
    printArray(arr);

    
}

int main() {    

    vector<int> arr{0,1,1,0,1,0,1,0,1,0,0,0,1,1,1,0,1,0,1,0,1,1,1,0,0,1};

    //sort 0's ans 1's
    sortZeroOne(arr);

    return 0;
}