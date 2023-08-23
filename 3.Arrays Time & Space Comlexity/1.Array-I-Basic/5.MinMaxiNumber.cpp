#include<iostream>
#include<limits.h>
using namespace std;

int findMin(int arr[], int n) {
    int mini = arr[0];

    for (int i = 0; i < n; i++) {
        if(mini > arr[i])
            mini = arr[i];
    }
    
    return mini;
}

int findMax(int arr[], int n) {
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        if(maxi < arr[i])
            maxi = arr[i];
    }
    
    return maxi;
}

int main() {

    int arr[] = {56,56,55,54,55,55,55,555};

    int size = sizeof(arr) / sizeof(arr[0]);

    //find min and max
    int mini = findMin(arr, size);
    int maxi = findMax(arr, size);

    cout << "Minimum of the array: " << mini << endl;
    cout << "Maximum of the array: " << maxi << endl;

    return 0;
}