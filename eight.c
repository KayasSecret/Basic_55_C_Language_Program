// Program to check girls' and boys' marriage age (girl >= 18, boy >= 21)

#include<stdio.h>

int main() {
    int girl, boy;

    printf("Enter the age of girl - ");
    scanf("%d", &girl);

    printf("Enter the age of boy - ");
    scanf("%d", &boy);

    if(boy >= 21 && girl >= 18) {
        printf("Both can get married.\n");
    } else if(boy >= 21) {
        printf("Only the boy is eligible to marry.\n");
    } else if(girl >= 18) {
        printf("Only the girl is eligible to marry.\n");
    } else {
        printf("Neither of them is eligible to marry.\n");
    }

    return 0;
}
