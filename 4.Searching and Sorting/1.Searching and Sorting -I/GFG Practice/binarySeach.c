#include<stdio.h>
int binarySearch(int arr[], int n, int target) {
    int start = 0;
    int end = n-1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) 
            return mid;
        if (arr[mid] < target)
                start = mid + 1;
        else //if (arr[mid] > target)
                end = mid - 1;
    }
    return -1;
}
int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    int index = binarySearch(arr, size, target);
    (index == -1) ? printf("Not Found")
                  : printf("Index of %d is: %d", target, index);
    return 0;
}
