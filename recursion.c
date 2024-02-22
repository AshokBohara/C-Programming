#include <stdio.h>

// Function prototype
int factorial(int n);

int main() {
    // Example usage
    int number = 5;
    printf("Factorial of %d is: %d\n", number, factorial(number));

    return 0;
}

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case
        return n * factorial(n - 1);
    }
}

