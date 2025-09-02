#include <stdio.h>

int main() {
    int i;

    
    printf("=== Using break statement ===\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  
        }
        printf("%d ", i);
    }
    printf("\n");

    printf("\n=== Using continue statement ===\n");
    for (i = 1; i <= 15; i++) {
        if (i == 3) {
            continue; 
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}