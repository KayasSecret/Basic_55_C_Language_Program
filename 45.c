// Program to find string is palindrome or not.

#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0') {
        len++;
    }

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("String is Palindrome");
    else
        printf("String is not Palindrome");

    return 0;
}
