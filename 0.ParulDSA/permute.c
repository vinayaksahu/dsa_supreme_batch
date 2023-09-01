#include<stdio.h>

void permute() {

    for (int i = 1; i <= 3; i++) {
        for (int j = j+1; j <= 3 ; j++) {
            printf("%d %d\n",i, j);
        }
    
    }
    
}

int main(int argc, char const *argv[])
{
    //int arr[] = {1,2,3};

    permute();

    return 0;
}
