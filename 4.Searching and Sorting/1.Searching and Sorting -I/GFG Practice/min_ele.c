#include<stdio.h>
#include<limits.h>
int findMin(int arr[], int n) {
    //1: Set MIN_ELE = any higher value
    int min_ele = INT_MAX;
    //2: Traverse the array
    for (int i = 0; i < n; i++) {
        //2.1: check if current element < MIN_ELE
        if (arr[i] < min_ele)
            min_ele = arr[i];//update the MIN_ELE with current element
    }
        
    //3: return MIN_ELE
    return min_ele;
}

int findMax(int arr[], int n) {
    //1: Set MIN_ELE = any higher value
    int max_ele = INT_MIN;
    //2: Traverse the array
    for (int i = 0; i < n; i++) {
        //2.1: check if current element < MIN_ELE
        if (arr[i] > max_ele)
            max_ele = arr[i];//update the MIN_ELE with current element
    }
        
    //3: return MIN_ELE
    return max_ele;
}

int main() {
    int arr[] = {75,782,45,35,43,45,35,32,43,44};
    int n = sizeof(arr) / sizeof (arr[0]);
    int mini = findMin(arr, n);
    printf("minimum of the array is: %d", mini);
    int maxi = findMax(arr, n);
    printf("\nminimum of the array is: %d", maxi);
    return 0;
}
