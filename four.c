// Program to find out the roots of quadratic equation.

#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c;
    float root1, root2, D;
    
    printf("Enter the value for a - ");
    scanf("%f", &a);

    printf("Enter the value for b - ");
    scanf("%f", &b);

    printf("Enter the value for c - ");
    scanf("%f", &c);

    D = (b*b) - 4 * a * c;

    if(D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        printf("Roots are real and different.\n");
        printf("%.2f\n", root1);
        printf("%.2f\n", root2);
    } else if(D == 0) {
        root1 = -b / (2 * a);

        printf("Roots are real and equal.\n");
        printf("%.2f\n", root1);
    } else {
        printf("Roots are imaginary");
    }

    return 0;
}