#include<stdio.h>

struct Book {
    int id;
    int price;
    int pages;
};

int main(){
    struct Book b1;

    b1.id = 1;
    b1.price = 299;
    b1.pages = 440;

    printf("Id: %d\n", b1.id);
    printf("Pages: %d\n", b1.pages);
    printf("Price: %d\n", b1.price);

    return 0;
}