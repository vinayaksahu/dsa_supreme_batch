#include<stdio.h>

int binarySearch(int arr[], int n, int target) {

    int start = 0; // start index
    int end = n - 1; //end index
    int mid = (start + end) / 2;

    while (start <= end) {
        if (arr[mid] == target) { //mid_element = target  return index
            return mid;
        }

        else if(arr[mid] < target)  { //left search
            start = mid + 1; //update start
        }

        else if(arr[mid] > target)  { //right search
            end = mid - 1; //update end
        }

        mid = (start + end) / 2;//update mid
    }
    
}

int main(int argc, char const *argv[])
{
    
    int arr[] = {1,2,3,4,5,6,7,8,9};

    int size = sizeof(arr) / sizeof(int);

    int target = 8;

    int index = binarySearch(arr, size, target);

    printf("%d", index);

    return 0;
}
