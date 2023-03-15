#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>& arr) {
    for (auto &i : arr) {
        cout << i << " ";   
    }
}

void sort(vector<int>& arr) {

    //3 pointer approach
    int l = 0;
    int m = 0;
    int h = arr.size()-1;
    while (m <= h) {
        if (arr[m] == 0) {
            swap(arr[l], arr[m]);
            m++;
            l++;
        } else if (arr[m] == 1) {
            m++;
        } else { //if (arr[i] == 2) {
            swap(arr[m], arr[h]);
            h--;
        }
    }
    
    //print
    printArray(arr);
}

int main() {

    vector<int> arr{0,1,2,2,1,0,1,2,1,0,1,2,2,1,1,0,0,1,1,2,0,0,1,2};

    sort(arr);

    return 0;
}