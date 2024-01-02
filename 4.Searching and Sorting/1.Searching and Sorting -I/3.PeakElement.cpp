#include<iostream>
#include<vector>
using namespace std;

int peakElement(vector<int> arr) {

    int start = 0;
    int end = arr.size()-1;

    while (start < end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] < arr[mid+1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
}

int main () {

    vector<int> arr{10,12,14,13,11,9};

    int peakIndex = peakElement(arr);

    cout << "Peak element: " << arr[peakIndex];

    return 0;
}