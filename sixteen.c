// Program to find sum of n integer numbers

#include<stdio.h>

int main() {
    int n, i, sum = 0, num;

    printf("How many number do you want to add - ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("Enter number = ");
        scanf("%d", &num);

        sum = sum + num;
    }

    printf("Total sum is = %d", sum);

    return 0;
}