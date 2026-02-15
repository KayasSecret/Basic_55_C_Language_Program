// Program to find length of string without function.

#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("Length of string = %d", count);

    return 0;
}
