#include <stdio.h>
// Function to summarize a specific number of values in an array of doubles
// and return the result via a parameter.
int arrayAdd(double *array, int numElements, double *result) {
    if (array == NULL || result == NULL) {
        return -1;  // Return error code -1 if array or result pointer is NULL
    }
    
    *result = 0.0;  // Initialize the result to 0
    for (int i = 0; i < numElements; i++) {
        *result += array[i];  // Add each element to the result
    }
    
    return 0;  // Return 0 to indicate success
}

int main() {
    double values[] = {1.2, 2.3, 3.4, 4.5, 5.6};  // Declare and initialize an array of doubles
    int numToSummarize = 3;  // Specify the number of elements to summarize
    double result;  // Variable to store the result

    // Call arrayAdd function and check for errors
    int errorCode = arrayAdd(values, numToSummarize, &result);
    
    if (errorCode == 0) {
        // Print the result if the function succeeded
        printf("The sum of the first %d values is: %.2f\n", numToSummarize, result);
    } else {
        // Print an error message if the function failed
        printf("An error occurred while summing the array.\n");
    }
    return 0;
}
