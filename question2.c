#include <stdio.h>

// Function to swap two integer values using pointers
void swapValues(int *a, int *b) {
    int temp = *a;  // Store the value pointed to by a in temp
    *a = *b;        // Assign the value pointed to by b to the location pointed to by a
    *b = temp;      // Assign the value stored in temp to the location pointed to by b
}

int main() {
    int value1 = 35;
    int value2 = -97;

    printf("Before swap: value1 = %d, value2 = %d\n", value1, value2);

    // Call the swapValues function and pass the addresses of value1 and value2
    swapValues(&value1, &value2);

    printf("After swap: value1 = %d, value2 = %d\n", value1, value2);

    return 0;
}