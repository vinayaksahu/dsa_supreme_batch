#include <stdio.h>
#include <assert.h>

int main() {
    int x = 10;

    static_assert(x == 1, "Failed ho gya");

    printf("Rest of the program");

    return 0;
}
