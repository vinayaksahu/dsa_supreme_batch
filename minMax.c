#include<stdio.h>

int findMin(int arr[], int n) {

    int min_ele = 1000;

    for (int i = 0; i < n; i++) {
        if (min_ele > arr[i]) {
            min_ele = arr[i];
            
        }
    }

    return min_ele;
}

int findMax(int arr[], int n) {

    int max_ele = -1000;

    for (int i = 0; i < n; i++) {
        if (max_ele < arr[i]) {
            max_ele = arr[i];
        }
            
    }

    return max_ele;
}

int main(int argc, char const *argv[])
{
    int arr[] = {12,35,974,68,125,63};

    int size = sizeof(arr) / sizeof(arr[0]);

    int min_ele = findMin(arr, size);
    printf("%d\n", min_ele);

    int max_ele = findMax(arr, size);
    printf("%d\n", max_ele);

    return 0;
}
