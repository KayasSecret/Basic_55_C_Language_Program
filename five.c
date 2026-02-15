// Program to swap 2 numbers using 3rd variable.

#include<stdio.h>

int main() {
    int temp, a, b;

    printf("Enter the value for a - ");
    scanf("%d", &a);

    printf("Enter the value for b - ");
    scanf("%d", &b);

    printf("Before the swap a is %d\n", a);
    printf("Before the swap b is %d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("After the swap a is %d\n", a);
    printf("After the swap b is %d\n", b);

    return 0;
}