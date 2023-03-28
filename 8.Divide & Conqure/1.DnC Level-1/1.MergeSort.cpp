#include<iostream>
#include<vector>
using namespace std;

void merge(int *arr, int s, int e) {
    //mid
    int mid = (s + e) / 2;

    int len1 = mid - s + 1; //first new array length
    int len2 = e - mid; //second new array length

    //create 2 new arrays for len1 and len2 length
    int *left = new int[len1];
    int *right = new int[len2];

    //copy values to left array
    int k = s;
    int i = 0;
    while(i < len1) {
        left[i++] = arr[k++];
    }

    //copy values to right array
    k = mid + 1;
    i = 0;
    while(i < len2) {
        right[i++] = arr[k++];
    }

    //merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;
    while(leftIndex < len1 && rightIndex < len2) {
        if(left[leftIndex] < right[rightIndex])
            arr[mainArrayIndex++] = left[leftIndex++];
        else
            arr[mainArrayIndex++] = right[rightIndex++];
    }

    //copy logic for left 
    while(leftIndex < len1) {
        arr[mainArrayIndex++] = left[leftIndex];
    }

    //copy logic for right
    while(rightIndex > len2) {
        arr[mainArrayIndex++] = right[rightIndex++];
    }

}

void mergeSort(int* arr, int s, int e) {

    //base case
    if(s >= e)
        return;

    //devide
    int mid = (s + e) / 2;

    //left mergeSort
    mergeSort(arr, s, mid);

    //right sort
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);
}

int main() {

    int arr[] = {5,4,1,6,9,8,7,1,2,3};

    int size = sizeof(arr) / sizeof(arr[0]);

    int start = 0;

    int end = size - 1;
    
    mergeSort(arr, 0, end);

    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}