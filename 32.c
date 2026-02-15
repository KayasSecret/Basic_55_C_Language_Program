// Program to find Armstrong number b/w 1 to 500.

#include <stdio.h>

int main() {
    int num, temp, rem, sum;

    printf("Armstrong numbers between 1 to 500 are:\n");

    for (num = 1; num <= 500; num++) {
        sum = 0;
        temp = num;

        while (temp > 0) {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
