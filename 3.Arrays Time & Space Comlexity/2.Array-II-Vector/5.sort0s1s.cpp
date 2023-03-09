#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr) {

    for(auto val : arr) {
        cout << val <<" ";
    } cout << endl;
}

void sortZeroOne(vector<int> arr) {

    //2 pointer approach
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;
    while (i != end) {
        if(arr[i] == 0){
            swap(arr[start], arr[i]);
            start++;
            i++;
        }
        else if (arr[i] == 1) {
            swap(arr[i], arr[end]);
            end--;
        }
    }

    //print array
    printArray(arr);
}

int main() {
    
    vector<int> arr{0,1,1,1,0,0,0,1,0,1,0,1,0};

    sortZeroOne(arr);

    return 0;
}
