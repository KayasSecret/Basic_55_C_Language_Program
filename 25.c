// Program to search the digit to a given number.

#include <stdio.h>

int main() {
    int num, digit, rem, found = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter digit to search: ");
    scanf("%d", &digit);

    while (num > 0) {
        rem = num % 10;
        if (rem == digit) {
            found = 1;
            break;
        }
        num = num / 10;
    }

    if (found == 1)
        printf("Digit found");
    else
        printf("Digit not found");

    return 0;
}
