// Program to swap 2 numbers by using bit wise operator.

#include<stdio.h>

int main() {
    int a, b;

    printf("Enter the value for a - ");
    scanf("%d", &a);

    printf("Enter the value for b - ");
    scanf("%d", &b);

    printf("Before the swap a is - %d\n", a);
    printf("Before the swap b is - %d\n", b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After the swap a is - %d\n", a);
    printf("After the swap b is - %d\n", b);

    return 0;
}