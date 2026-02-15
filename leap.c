// Program to check weather input year is leap year or not.

#include<stdio.h>

int main() {
    int y;

    printf("Enter any year - ");
    scanf("%d", &y);

    if(y%400 == 0 || (y%4 == 0 && y%100 != 0)) {
        printf("This is leap year.");
    } else {
        printf("This is not a leap year.");
    }

    return 0;
}