// Program to find power of a number.

#include<stdio.h>

int main() {
    int n, x, i, res=1;

    printf("Enter the number - ");
    scanf("%d", &n);

    printf("Enter the power - ");
    scanf("%d", &x);

    for(i=1; i<=x; i++) {
        res = res * n;
    }

    printf("Your answer is - %d", res);
}
