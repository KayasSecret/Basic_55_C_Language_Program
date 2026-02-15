#include <stdio.h>

int main() {
    int n, a, b;
    float result;

    printf("Enter the value for a - ");
    scanf("%d", &a);

    printf("Enter the value for b - ");
    scanf("%d", &b);

    printf("\nChoose one option out of four!\n");
    printf("1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n");
    printf("Press 1 to 4 - ");
    scanf("%d", &n);

    switch(n) {
        case 1: result = a + b;
                printf("Addition = %.2f\n", result);
                break;
        case 2: result = a - b;
                printf("Subtraction = %.2f\n", result);
                break;
        case 3: 
            if(b != 0) {
                result = (float)a / b;
                printf("Division = %.2f\n", result);
            } else {
                printf("Cannot divide by zero!\n");
            }
            break;
        case 4: result = a * b;
                printf("Multiplication = %.2f\n", result);
                break;
        default: printf("Please choose a valid option (1-4)!\n");
    }

    return 0;
}
