// Find the area of circle

#include<stdio.h>

int main() {
    int r;
    float Area, PI = 3.14;


    printf("Enter the radius of circle - ");
    scanf("%d", &r);

    Area = PI * r * r;

    printf("Your answer is - %.2f", Area);

    return 0;
}