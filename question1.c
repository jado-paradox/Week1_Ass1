#include <stdio.h>

int main() {
    int x = 5;       // Define an integer x and initialize it to 5
    int *ptr1;       // Declare a pointer to integer
    int *ptr2;       // Declare another pointer to integer

    ptr1 = &x;       // ptr1 points to x
    ptr2 = &x;       // ptr2 also points to x

    // Change the value of x via ptr1
    *ptr1 = 10;

    // Read the value of x via ptr2
    int value = *ptr2;

    // Print the value of x
    printf("The value of x is: %d\n", value);

    return 0;
}
