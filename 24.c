// Program to print reverse of an input number.
    
#include<stdio.h>

int main() {
    int n, i, dig, rev = 0; 
    
    printf("Enter the number - ");
    scanf("%d", &n);

    while(n!=0) {
        dig = n % 10;
        rev = rev * 10 + dig;
        n = n/10;
    }

    printf("Your answer is - %d", rev);

    return 0;
}