// Program for salary management.

#include<stdio.h>

int main() {
    float basic, hra, da, tax, pf, net_salary;

    printf("Enter the basic pay - ");
    scanf("%f", &basic);

    printf("Enter the hra - ");
    scanf("%f", &hra);

    printf("Enter the DA - ");
    scanf("%f", &da);

    printf("Enter the tax - ");
    scanf("%f", &tax);

    printf("Enter the pf - ");
    scanf("%f", &pf);

    net_salary = basic + hra + da - tax - pf;

    printf("\n== Your salary details here ==\n");
    printf("Your Basic payment is - %.2f\n", basic);
    printf("Your HRA is - %.2f\n", hra);
    printf("Your DA is - %.2f\n", da);
    printf("Your Tax is - %.2f\n", tax);
    printf("Your PF is - %.2f\n", pf);
    printf("Your Net Salary is - %.2f\n", net_salary);

    return 0;
}