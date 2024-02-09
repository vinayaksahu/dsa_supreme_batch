   #include <stdio.h>
   #include <stdlib.h>

   int* createInt() {
       int x = 10;
       int* ptr = &x;
       return ptr;  // Returning the address of a local variable
   }

   int main() {
       int* danglingPtr = createInt();

       // Accessing a dangling pointer
       printf("Dangling Pointer Value: %d\n", *danglingPtr);

       // Avoiding a dangling pointer by setting it to NULL
       danglingPtr = NULL;

       return 0;
   }