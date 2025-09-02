#include <stdio.h>

int main() {
    int i=1;

    // for loop
    printf("\n=== Using for loop ===\n");
    for (i = 1; i <= 10; i++) {
        printf("%d \n", i);
    }
    printf("\n");

    // While loop
    printf("=== Using while loop ===\n");
    while (i <= 10) {
        printf("%d \n ", i);
        i++;
    }
    printf("\n");

    // do-while loop
    printf("\n=== Using do-while loop ===\n");
    do {
        printf("%d \n", i);
        i++;
    } while (i <= 10);
    printf("\n");

    return 0;
}