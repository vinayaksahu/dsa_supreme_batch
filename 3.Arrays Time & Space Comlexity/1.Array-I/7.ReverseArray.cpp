#include<iostream>
using namespace std;

int main() {

    int arr[] = {9,8,7,6,5,4,3,2,1};

    int size = sizeof(arr) / sizeof(arr[0]);

    //reverse array
//For-Loop indexing
/*     for (int i = size-1; i >= 0; i--) {
        cout << arr[i] <<" ";
    } */

//2 Pointer approach - while loop
    int start = 0;
    int end = size - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    //print array
    for (auto val : arr) {
        cout << val <<" ";
    }
    


    return 0;
}