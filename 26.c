// Program to check number is Palindrome or not.

#include <stdio.h>

int main() {
    int num, rev = 0, rem, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (temp == rev)
        printf("Number is Palindrome");
    else
        printf("Number is not Palindrome");

    return 0;
}

