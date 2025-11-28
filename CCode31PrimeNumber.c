# include <stdio.h>
# include <stdbool.h>
# include <math.h>

// Function to check if a number is prime
bool isPrime(int num) {
    // 0, 1, and negative numbers are not prime
    if (num <= 1) {
        return false;
    }

    // 2 is the only even prime number
    if (num == 2) {
        return true;
    }

    // If the number is even and greater than 2, it's not prime
    if (num % 2 == 0) {
        return false;
    }

    // Check for divisibility from 3 up to the square root of num,
    // incrementing by 2 to only check odd divisors
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false; // Found a divisor, so it's not prime
        }
    }

    return true; // No divisors found, so it's prime
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}