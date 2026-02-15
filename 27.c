// Program to convert a decimal number into binary.

#include <stdio.h>

int main() {
    int num, binary[20], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}
