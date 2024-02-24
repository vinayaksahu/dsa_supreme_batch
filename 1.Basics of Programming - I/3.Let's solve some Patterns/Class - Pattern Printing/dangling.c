#include <stdio.h>
#include <stdlib.h>

int main() {
  //malloc

    int *ptr = (int*)malloc(sizeof(int));

    *ptr = 50;

    printf("%d  ", *ptr);

    free(ptr);
    
    printf("%d  ", *ptr);
    
    return 0;
}