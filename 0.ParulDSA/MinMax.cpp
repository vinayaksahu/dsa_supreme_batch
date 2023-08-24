#include<stdio.h>

int findMin(int arr[], int n) {
    //1: let's assume the 1st element is min_ele
    int min_ele = arr[0];
    //2: Traverse the entire array
    for (int i = 1; i < n; i++) {
        //2.1: if curr_ele is less then min_ele
        if (arr[i] < min_ele)
                //2.1.1: assign the curr_ele = min_ele
                min_ele = arr[i];
    }
    //3: return the min_ele
    return min_ele;
}

int findMax(int arr[], int n) {
    //1: let's assume the 1st element is min_ele
    int max_ele = arr[0];
    //2: Traverse the entire array
    for (int i = 1; i < n; i++) {
        //2.1: if curr_ele is less then min_ele
        if (arr[i] > max_ele)
                //2.1.1: assign the curr_ele = min_ele
                max_ele = arr[i];
    }
    //3: return the min_ele
    return max_ele;
}

int main() {

    int arr[] = {5,1,2,3,1,4,0,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Minimum elelemnt is: %d", findMin(arr, n));
    printf("\nMaximum elelemnt is: %d", findMax(arr, n));
    return 0;
}
