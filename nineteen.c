// Program to print series => 1, 5, 14, 30, 55, 91, ........, n

#include<stdio.h>

int main() {
    int i, n, term = 0;

    printf("Enter the number - ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        term = term + (i*i);
        printf("%d, ", term);
    }

    return 0;
}