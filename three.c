// Program to convert temperature from Fahrenheit (F) to centigrade(C).

#include<stdio.h>

int main() {
    float fahranheit, centigrade;

    printf("Enter the temprature in fahranheit - ");
    scanf("%f", &fahranheit);

    centigrade = (fahranheit - 32) * 5 / 9;

    printf("Temprature in centigrade - %.2f", centigrade);

    return 0;
}