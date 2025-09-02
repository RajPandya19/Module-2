#include <stdio.h>

// Function
int factorial(int n);

int main() {
    int num, result;

    // Input
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    // Function call
    result = factorial(num);

    // Output
    printf("Factorial of %d = %d\n", num, result);

    return 0;
}

// definition
int factorial(int n) {
    int i, fact = 1;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}