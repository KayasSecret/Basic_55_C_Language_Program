// Program to find out the average of 5 numbers.

#include<stdio.h>

int main() {
    int a, b, c, d, e;
    float avg;

    printf("Enter the value for a - ");
    scanf("%d", &a);

    printf("Enter the value for b - ");
    scanf("%d", &b);

    printf("Enter the value for c - ");
    scanf("%d", &c);

    printf("Enter the value for d - ");
    scanf("%d", &d);

    printf("Enter the value for e - ");
    scanf("%d", &e);

    avg = (a + b + c + d + e) / 5.0;

    printf("Average of all 5 numbers = %.2f", avg);

    return 0;
}