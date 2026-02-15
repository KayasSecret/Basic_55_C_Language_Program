// Program to find a factorial of a number.

#include<stdio.h>

int fact(int x) {
    if(x==1) {
        return 1;
    } else {
        return x * fact(x - 1);
    }
}

int main() {
    int n, result;

    printf("Enter the number do you want print the factorial - ");
    scanf("%d", &n);

    result = fact(n);

    printf("%d", result);

    return 0;
}