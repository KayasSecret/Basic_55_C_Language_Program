// Program to print number name of input digit by switch case.

#include<stdio.h>

int main() {
    int n;

    printf("Enter any number (between 0 to 9) - ");
    scanf("%d", &n);

    switch(n) {
        case 0 : printf("Zero"); break;
        case 1 : printf("One"); break;
        case 2 : printf("Two"); break;
        case 3 : printf("Three"); break;
        case 4 : printf("Four"); break;
        case 5 : printf("Five"); break;
        case 6 : printf("Six"); break;
        case 7 : printf("Seven"); break;
        case 8 : printf("Eight"); break;
        case 9 : printf("Nine"); break;
        default : printf("Enter number only 0 to 9");
    }

    return 0;
}