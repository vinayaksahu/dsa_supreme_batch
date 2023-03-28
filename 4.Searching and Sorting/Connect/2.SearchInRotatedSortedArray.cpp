#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr) {
    int s = 0;
    int e = arr.size()-1;
    while(s <= e) {
        int mid = s + (e - s) / 2;
        if(s == e)
            return s;
        if(mid <= e && arr[mid] > arr[mid+1])
            return mid;
        if(mid-1 >= s && arr[mid-1] < arr[mid])
            return mid-1;
        if(arr[s] > arr[mid])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}

int binarySearch(vector<int> arr, int s, int e, int key) {
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if(arr[mid] == key)
            return mid;
        if(arr[mid] < key)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int search(vector<int> arr, int key) {

    int pivotIndex = findPivot(arr);

    if(key >= arr[0] && key <= arr[pivotIndex])
        return binarySearch(arr, 0, pivotIndex, key);
    else
        return binarySearch(arr, pivotIndex + 1, arr.size() - 1, key);
}

int main() {

    vector<int> arr{9,10,2,4,6,8};

    int key = 6;

    int ans = search(arr, key);

    cout << "Key at index: " << ans;

    return 0;
}