#include <stdio.h>

// Function to find the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    // Handle negative numbers by converting them to positive
    if (num < 0) {
        num = -num;
    }
    // Loop until the number becomes 0
    while (num > 0) {
        sum += num % 10; // Add the last digit to sum
        num /= 10;      // Remove the last digit from the number
    }
    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = sumOfDigits(number);
    printf("Sum of digits of %d is: %d\n", number, result);

    return 0;
}