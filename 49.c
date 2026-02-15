// Program to maintain a book store record with field (booknumber, bookname, author, price).

#include <stdio.h>

struct book {
    int bookno;
    char bookname[50];
    char author[50];
    float price;
};

int main() {
    struct book b;

    printf("Enter book number: ");
    scanf("%d", &b.bookno);

    printf("Enter book name: ");
    scanf("%s", b.bookname);

    printf("Enter author name: ");
    scanf("%s", b.author);

    printf("Enter price: ");
    scanf("%f", &b.price);

    printf("\n--- Book Details ---\n");
    printf("Book Number: %d\n", b.bookno);
    printf("Book Name: %s\n", b.bookname);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);

    return 0;
}
