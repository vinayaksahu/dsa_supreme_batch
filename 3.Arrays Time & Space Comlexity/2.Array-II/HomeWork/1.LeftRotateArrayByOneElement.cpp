#include<iostream>
using namespace std;

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    //Left rotate by one element
    int first = arr[0]; //store first element at first variable
    for (int i = 1; i < n; i++) {
        arr[i-1] = arr[i]; //left shift elements by one elemnt
    }
    arr[n-1] = first; // store 1st element(first) tp 

    //print array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}