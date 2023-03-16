#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int> arr, int key) {

    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e - s) / 2;
    while(s <= e) {
        //agr key mil gya
        if (arr[mid] == key) {
            return mid;
        }
        //nhi mila - left search
        else if(arr[mid] > key) {
            e = mid - 1;
        }
        //nhi mila - right search
        else if(arr[mid] < key) {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    return -1;
}

int main() {
    
    //Binary Search using inbuild function
    //for array
    int brr[] = {1,2,3,4,5,6,7};
    int size = 7;
    int brrKey = 7;
    if(binary_search(brr, brr + size, brrKey))
        cout << "array:Found" << endl;
    else    
        cout << "array:Not found" << endl;

    //for vector
    vector<int> arr{1,2,3,4,5,6,7,8,9};
    int arrKey = 8;
    if (binary_search(arr.begin(), arr.end(), arrKey))
        cout << "vector:Found" << endl;
    else
        cout << "vector:Not found" << endl;

    //Binary Search using function
    int key = 8;
    int index = binarySearch(arr, key);

    if (index == -1)
        cout << "Not found.";
    else
        cout << "Found at index: " << index;

    return 0;
}