#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> ans) {

    for(auto val : ans) {
        cout << val << " ";
    }
}

void sortZeroOne(vector<int> arr) {

    vector<int> ans;

    //2 pointer approach
    int start = 0;
    int end = arr.size()-1;
    int i = 0;
    while (i != end) {
        if (arr[i] == 0) {
            swap (arr[start], arr[i]);
            start++;
            i++;
        }
        else if (arr[i] == 1) {
            swap (arr[end], arr[i]);
            end--;
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