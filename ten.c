// Program to find largest number among 3 numbers.

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {23, 54, 34};
    int i;
    int max = INT_MIN;

    for(i = 0; i < 3; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest number is %d\n", max);

    return 0;
}
