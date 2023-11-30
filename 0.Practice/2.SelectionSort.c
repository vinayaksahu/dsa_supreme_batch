#include<stdio.h>

void swap(int* a, int* b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    
    //1: traverse the array : outer loop
    for (int i = 0; i < n-1; i++) {
        //1.1: find min_ele : inner loop
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }
        
        //1.2: swap curr_ele with min_ele
        swap(&arr[i], &arr[min_idx]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
} 

int main() {

    int arr[] = {5,1,2,3,1,4,0,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    } printf("\n");

    seletionSort(arr, n);
    
    return 0;
}