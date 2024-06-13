#include <stdio.h>

void printReverse(int *ptr, int *start) {
    if (ptr < start) {
        return;  // Base case: if the pointer is before the start of the array, return
    }
    printf("%d\n", *ptr);  // Print the value pointed to by the pointer
    printReverse(ptr - 1, start);  // Recursively call the function with the pointer moved to the previous element
}

int main() {
    int array[5] = {10, 20, 30, 40, 50};  // Declare and initialize an array of 5 integers
    printReverse(&array[4], array);  // Call the recursive function starting from the last element of the array

    return 0;
}
