/* Program to print series 1/1! - 2/2! + 3/3! - 4/4! + */

#include<stdio.h>

int fact(int x) {
    if(x==1 || x==0) {
        return 1;
    } else {
        return x * fact(x-1);
    }
}

int main() {
    int n, i;
    float term, total=0;

    printf("Enter the terms do you want - ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        term = (float)i / fact(i);

        if(i%2==0) {
            total = total - term;
        } else {
            total = total + term;
        }
    }

    printf("Result = %.2f", total);

    return 0;
}