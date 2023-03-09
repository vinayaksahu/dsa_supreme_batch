#include<iostream>
using namespace std;

int main() {

    int arr[] = {1,4,5,2,6,3,5};

    //two poiter approach
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;

    while(start <= end) {
        if(start == end)
            cout << "(" << arr[start]  << ")"<< endl;
        else    
            cout << "(" << arr[start] << ", " <<arr[end] << ")"<< endl;
        start++;
        end--;
    }

    return 0;
}