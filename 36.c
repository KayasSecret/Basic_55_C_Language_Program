// Program to insert an element in array (by position wise/by element wise).

#include <stdio.h>

int main() {
    int a[50], n, i, choice, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("1. Insert by position\n");
    printf("2. Insert at end\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter position: ");
            scanf("%d", &pos);

            printf("Enter value to insert: ");
            scanf("%d", &value);

            for (i = n; i >= pos; i--) {
                a[i] = a[i - 1];
            }

            a[pos - 1] = value;
            n++;
            break;

        case 2:
            printf("Enter value to insert: ");
            scanf("%d", &value);

            a[n] = value;
            n++;
            break;

        default:
            printf("Invalid choice");
            return 0;
    }

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
