#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to swap two digits
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find the next greater number with the same set of digits
bool findNextGreater(char num[], int n) {
    int i, j;

    // Find the first digit that is smaller than the digit on its right
    for (i = n - 2; i >= 0; i--) {
        if (num[i] < num[i + 1]) {
            break;
        }
    }

    // If no such digit is found, it's not possible to form a greater number
    if (i == -1) {
        return false;
    }

    // Find the smallest digit to the right of num[i] that is larger than num[i]
    for (j = n - 1; j > i; j--) {
        if (num[j] > num[i]) {
            break;
        }
    }

    // Swap num[i] and num[j]
    swap(&num[i], &num[j]);

    // Sort the digits to the right of num[i] in ascending order
    for (int start = i + 1, end = n - 1; start < end; start++, end--) {
        swap(&num[start], &num[end]);
    }

    return true;
}

// Function to find the next greater number with the same set of digits
void nextGreaterSameDigits(char num[]) {
    int n = strlen(num);

    if (findNextGreater(num, n)) {
        printf("The next greater number with the same set of digits: %s\n", num);
    } else {
        printf("No greater number with the same set of digits can be formed.\n");
    }
}

int main() {
    char num[] = "1234";
    nextGreaterSameDigits(num);
    return 0;
}