#include<iostream>
using namespace std;

void printArray(int arr[], int n, int i) {

    //base case
    if(i>=n)
        return;

    //1 case sove kr diya
    cout << arr[i] <<" ";

    //baki recursion sambhal lega
    printArray(arr,n,i+1);    
}

int main() {
    
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int i = 0;
    printArray(arr,size,i);
    return 0;
}
