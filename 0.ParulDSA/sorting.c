#include <stdio.h>
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d   ", arr[i]);
    printf("\n");
}
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
/* void selectionSort(int arr[], int n) {
  //1: Traverse the array upto (n-1) index : outer Loop
    for(int i = 0; i < n-1; i++) {
     //1.1: set min index with current index 'i'
        int min_idx = i;
     //1.2: Traverse the elements : inner Loop // min-idx-ele
        for(int j = i+1; j < n; j++) {
          //1.2.1: if(min element > current element)
          if(arr[min_idx] > arr[j])
                 //1.2.1.1: update min index
                 min_idx = j;
        }
     //1.3: swap min element with current element
        swap(&arr[min_idx], &arr[i]);
        
    }
     
  //2: Print the Array
  printArray(arr, n);
  
} */
void bubbleSort(int arr[], int n) {
    //Algorithm(Steps):
    //1: Traverse for rounds : outer loop
    for(int i = 0; i < n-1; i++) {
       //1.1: Traverse the elements for adjecent elements comparison : Inner Loop
       for(int j = 0; j < n-i-1; j++) {
            //1.1.1: if cur1rent element is greater than next element 
            if(arr[j] > arr[j+1])
                   //1.1.1.1 swap current element and inext element
              swap(&arr[j], &arr[j+1]);
                   
       }
    }
    //2: print the Array
    printArray(arr, n);
}
int main() {
    int arr[] = {14,52,24,55,74};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Given array: "); printArray(arr, n);
    printf("Sorted array: "); bubbleSort(arr, n); //selectionSort(arr, n);
}