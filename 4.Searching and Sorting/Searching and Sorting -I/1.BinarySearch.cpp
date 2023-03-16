#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int key) {

    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start) / 2;
    while (start < end) {
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else if (arr[mid] > key)
            end = mid - 1;
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main() {

    vector<int> arr{1,2,3,4,5,6,7,8,9};

    int key = 8;

    int index = binarySearch(arr, key);

    if (index == -1)
        cout << "Not found.";
    else
        cout << "Found at index: " << index;

    return 0;
}