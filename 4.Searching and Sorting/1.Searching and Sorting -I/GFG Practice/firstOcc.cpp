#include<iostream>
using namespace std;

int findFirstOcc(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int result = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == x) {
            result = mid;
            high = mid - 1; // move left to find the first occurrence
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    return result;
}

int main() {

    int arr[] = {2,5,6,7,7,9,10};
    int n = 8;
    int x = 7;
    int firstOccIdx = findFirstOcc(arr, n, x);
    cout << "First occurance index: " << firstOccIdx << endl;

    return 0;
}