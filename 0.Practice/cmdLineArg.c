#include <stdio.h>

int main() {
    volatile int sensorValue = 0;  // Declaring a volatile variable

    while (1) {
        // Assume that the value of sensorValue is changed by external hardware
        // If the variable is not declared as volatile, the compiler might optimize
        // and assume that the value remains constant, leading to incorrect behavior.
        
        // Reading the volatile variable
        printf("Sensor Value: %d\n", sensorValue);

        // Some other code...

        // The compiler is prevented from optimizing away the reads to the volatile variable
    }

    return 0;
}
