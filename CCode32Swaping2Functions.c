#include <stdio.h>

// Function to swap two numbers using call by value
// Changes made to 'a' and 'b' inside this function will not affect the original variables in main.
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}

// Function to swap two numbers using call by reference
// Changes made to '*a' and '*b' inside this function will directly affect the original variables in main.
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference: *a = %d, *b = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;

    printf("Original values: x = %d, y = %d\n", x, y);

    // Demonstrating Call by Value
    printf("\n--- Call by Value ---\n");
    printf("Before swapByValue: x = %d, y = %d\n", x, y);
    swapByValue(x, y); // Passing copies of x and y
    printf("After swapByValue (in main): x = %d, y = %d\n", x, y); // x and y remain unchanged

    // Resetting values for Call by Reference demonstration
    x = 10;
    y = 20;

    // Demonstrating Call by Reference
    printf("\n--- Call by Reference ---\n");
    printf("Before swapByReference: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y); // Passing memory addresses of x and y
    printf("After swapByReference (in main): x = %d, y = %d\n", x, y); // x and y are swapped

    return 0;
}