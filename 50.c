// Program to copy a file and also count no of char, word and line.

#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;
    int chars = 0, words = 0, lines = 0;

    fp1 = fopen("source.txt", "r");
    fp2 = fopen("copy.txt", "w");

    if (fp1 == NULL) {
        printf("File not found");
        return 0;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
        chars++;

        if (ch == ' ' || ch == '\n')
            words++;

        if (ch == '\n')
            lines++;
    }

    fclose(fp1);
    fclose(fp2);

    printf("Characters = %d\n", chars);
    printf("Words = %d\n", words + 1);
    printf("Lines = %d\n", lines);

    return 0;
}
