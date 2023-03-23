#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int> arr, int key) {

    int s = 0;
    int e = arr.size()-1;
    while(s <= e) {
        int mid = s + (e - s) / 2; //mid
        if(key == arr[mid]) //found
            return mid;
        else if(key < arr[mid])
            e = mid - 1; //left search - update end
        else if(key > arr[mid])
            s = mid + 1; //right search - update start
    }
    return -1;
}

int main(){
    //array - binary search inbuild
    int arr[] = {1,2,3,4,5,6,7,8,9,542};
    int size = 10;
    int arrTgt = 542;
    if(binary_search(arr, arr + size, arrTgt))
        cout << "Array: Found" << endl;
    else
        cout << "Array: Not found" << endl;
    
    //vector - binary search inbuild
    vector<int> vrr{1,2,3,4,5,6,7,8,9};
    int vTgt = 7;
    bool vIdx = binary_search(vrr.begin(), vrr.end(), vTgt);
    if(vIdx)
        cout << "Vector: Found" << endl;
    else
        cout << "Vector: Not found" << endl;

    //Fuction - create yourself binary search function
    vector<int> fnr{1,2,3,4,5,6,7,8,9};
    int fnTgt = 4;
    int fnIdx = binarySearch(fnr, fnTgt);
    if(fnIdx == -1)
        cout << "Function: Not found" << endl;
    else    
        cout << "Function: Found at index " << fnIdx << endl;

    return 0;
}