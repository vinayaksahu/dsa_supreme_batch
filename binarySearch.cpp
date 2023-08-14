#include<stdio.h>

int binarySearch(int arr[], int n, int target) {

    int s = 0; //start index
    int e = n-1; //end index

    while (s <= e) {

        //int mid = (s + e) / 2; //middle index
        int mid = s + (e - s) / 2; //middle index   <- homework

        if (arr[mid] == target)
            return mid; 
        
        else if (arr[mid] > target)
            e = mid - 1; //update end
        
        else if (arr[mid] < target)
            s = mid + 1;//update start
    }

    return -2;

}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9}; 

    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 8;

    int index = binarySearch(arr, size, target);

    if(index == -2)
        printf("Element not fouond.");
    else
        printf("%d", index);

    return 0;
}
