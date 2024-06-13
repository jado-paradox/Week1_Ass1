#include <stdio.h>

// Function to summarize a specific number of values in an array of doubles
double sumArray(double *array, int numElements) {
    double sum = 0.0;  // Initialize sum to 0
    for (int i = 0; i < numElements; i++) {
        sum += array[i];  // Add each element to the sum
    }
    return sum;  // Return the result
}

int main() {
    double values[] = {1.2, 2.3, 3.4, 4.5, 5.6};  // Declare and initialize an array of doubles
    int numToSummarize = 3;  // Specify the number of elements to summarize

    // Call sumArray function and store the result
    double result = sumArray(values, numToSummarize);

    // Print the result
    printf("The sum of the first %d values is: %.2f\n", numToSummarize, result);

    return 0;
}
