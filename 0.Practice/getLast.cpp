#include<stdio.h>

int getLast(int arr[]) {

    int length = sizeof(arr) / sizeof(arr[0]);

    return arr[length-1];
}

int main() {
    
    int arr[] = {19,71,21,64,61,68,52};

    int lastEle = getLast(arr);

    printf("%d", lastEle);

    return 0;
}