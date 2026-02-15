// Program to print series => 1, 3, 6, 10, 15, 21, 28,...., n

#include<stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter the number - ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        sum = sum + i;
        printf("%d, ", sum);
    }

    return 0;
}