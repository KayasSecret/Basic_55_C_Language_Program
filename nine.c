// Program to find out result of student (five subjects).

#include<stdio.h>

int main() {
    int hindi, english, math, science, computer, total;
    float percentage;

    printf("Enter number of hindi sub - ");
    scanf("%d", &hindi);

    printf("Enter number of english sub - ");
    scanf("%d", &english);

    printf("Enter number of math sub - ");
    scanf("%d", &math);

    printf("Enter number of science sub - ");
    scanf("%d", &science);

    printf("Enter number of computer sub - ");
    scanf("%d", &computer);

    total = hindi + english + math + science + computer;
    percentage = ((float)total * 100.00)/ 500.00;

    printf("Total Marks - %d/500\n", total);
    printf("Your Percentage - %.2f", percentage);

    return 0;
}