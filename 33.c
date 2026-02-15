#include <stdio.h>

int main() {
    int choice, i, j, space;

    printf("1. Right Angle Triangle\n");
    printf("2. Pyramid Pattern\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            for (i = 1; i <= 5; i++) {
                for (j = 1; j <= i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 2:
            for (i = 1; i <= 5; i++) {
                for (space = 1; space <= 5 - i; space++) {
                    printf("  ");
                }
                for (j = 1; j <= (2 * i - 1); j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
