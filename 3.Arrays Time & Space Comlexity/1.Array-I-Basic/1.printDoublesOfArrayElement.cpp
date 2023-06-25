#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4};

    int n = sizeof(arr) / sizeof(int);

    //print double of array
    for (int i = 0; i < n; i++){
        arr[i] = 2 * arr[i];
        cout << arr[i] << " ";
    }

    return 0; 
}