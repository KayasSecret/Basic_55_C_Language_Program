// Program to maintain a record of any student and display the marksheet.

#include <stdio.h>

struct student {
    int roll;
    char name[50];
    int m1, m2, m3;
};

int main() {
    struct student s;
    int total;
    float per;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &s.m1, &s.m2, &s.m3);

    total = s.m1 + s.m2 + s.m3;
    per = total / 3.0;

    printf("\n--- Marksheet ---\n");
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %d %d %d\n", s.m1, s.m2, s.m3);
    printf("Total: %d\n", total);
    printf("Percentage: %.2f\n", per);

    return 0;
}
