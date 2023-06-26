#include <stdio.h>

void generateFibonacci(int n) {
    int num1 = 0, num2 = 1, nextNum, i;

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        printf("%d ", num1);
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
    }
}

int main() {
    int count;

    printf("Enter the number of terms: ");
    scanf("%d", &count); 

    generateFibonacci(count);

    return 0;
}
