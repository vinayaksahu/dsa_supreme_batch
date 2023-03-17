#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binary_search(vector<int> arr, int key) {

    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e - s) / 2;
    while(s <= e) {
        //agr key mil gya
        if(key == arr[mid])
            return mid;
        //nhi mila - mid se chota hai - update end
        else if (key < arr[mid])
            e = mid - 1;
        //nhi mila - mid se bda hai - right start
        else //if (key > arr[mid])
            s = mid + 1;
        //mid fir se nikalo
        mid = s + (e - s) / 2; 
    } 
    return -1;
}

int main(){
    //array - binary search inbuild
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int arrTgt = 8;
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
    int fnTgt = 9;
    int fnIdx = binary_search(fnr, fnTgt);
    if(fnIdx)
        cout << "Function: Found" << endl;
    else    
        cout << "Function: Not found" << endl;

    return 0;
}