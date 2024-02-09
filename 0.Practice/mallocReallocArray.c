#include<stdio.h>
#include<stdlib.h>

int main() {

    int *arr = (int*)malloc(5*sizeof(int));
    
    *(arr + 0) = 10;
    *(arr + 1) = 20;
    *(arr + 2) = 30;
    *(arr + 3) = 40;
    *(arr + 4) = 50;

    for(int i = 0; i < 5; i++) {
        //printf("%d ", *(i + arr));
        printf("%d ", i[arr]);
    }
                

    return 0;
}