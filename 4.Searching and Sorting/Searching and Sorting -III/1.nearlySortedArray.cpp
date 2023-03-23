#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int key) {
    int s = 0;
    int e = arr.size()-1;
    while(s <= e) {
        int mid = s + (e - s) / 2; //mid
        if(arr[mid] == key) //return ans
            return mid;
        if(arr[mid-1] == key)
            return mid-1;
        if(arr[mid+1] == key)
            return mid+1;
        if(arr[mid] < key) //right search
            s = mid + 2;
        else if(arr[mid] > key) //left search
            e = mid - 2;
    }
    return -1;
}

int main() {

    vector<int> arr{2,1,4,3,6,5,8,7};

    int key = 8;

    int index = binarySearch(arr, key);

    if(index != -1)
        cout << "Found at index " <<index << endl;
    else
        cout << "Not found";

    return 0;
}