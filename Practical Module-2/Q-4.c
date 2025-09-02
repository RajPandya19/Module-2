#include <stdio.h>

int main() {

    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Division: %d / %d = %d\n", num1, num2, num1 / num2);
    printf("Modulo (Remainder): %d %% %d = %d\n", num1, num2, num1 % num2);

    printf("\n--- Relational Operations ---\n");
    printf("Is %d equal to %d? -> %d\n", num1, num2, num1 == num2);
    printf("Is %d not equal to %d? -> %d\n", num1, num2, num1 != num2);
    printf("Is %d greater than %d? -> %d\n", num1, num2, num1 > num2);
    printf("Is %d less than %d? -> %d\n", num1, num2, num1 < num2);
    printf("Is %d greater than or equal to %d? -> %d\n", num1, num2, num1 >= num2);
    printf("Is %d less than or equal to %d? -> %d\n", num1, num2, num1 <= num2);

    printf("\n--- Logical Operations ---\n");
    printf("(%d > 0) AND (%d > 0)? -> %d\n", num1, num2, (num1 > 0 && num2 > 0));
    printf("(%d < 0) OR (%d > 0)? -> %d\n", num1, num2, (num1 < 0 || num2 > 0));
    printf("NOT (%d is non-zero)? -> %d\n", num1, !num1);

    return 0;
}
