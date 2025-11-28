#include <stdio.h>

// Function to calculate the sum of array elements using a pointer
int calculateSum(int *arrPtr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arrPtr + i); // Dereference the pointer to get the value at the current address
    }
    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the function, passing the base address of the array (which is a pointer)
    // and the size of the array
    int totalSum = calculateSum(arr, size);

    printf("Sum of array elements: %d\n", totalSum);

    return 0;
}