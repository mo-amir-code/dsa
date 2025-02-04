#include<stdio.h>
#include<string.h>

struct Book {
    int id;
    int price;
    char name[50];
};

void printfHighestBook(struct Book *books, int n);

int main(){
    struct Book books[5];
    int i, n;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\nEnter %d book details\n", i+1);
        printf("Enter id of book: ");
        scanf("%d", &books[i].id);
        printf("Enter price of book: ");
        scanf("%d", &books[i].price);
        printf("Enter name of book: ");
        scanf("%s", &books[i].name);
    }

    printf("\n\nBooks are: \n");
    float avgPrice = 0;
    for(i = 0; i < n; i++){
        printf("Id: %d\n", books[i].id);
        printf("Name: %s\n", books[i].name);
        printf("Price: %d\n\n", books[i].price);
        avgPrice += books[i].price;
    }

    printfHighestBook(books, n);

    avgPrice /= n;

    printf("\n\nAverage Price: %f", avgPrice);

    return 0;
}


void printfHighestBook(struct Book *books, int n){
    struct Book b1 = books[0];

    for(int i = 0; i < n; i++){
        if(b1.price < books[i].price){
            b1.price = books[i].price;
            b1.id = books[i].id;
            strcpy(b1.name, books[i].name);
        }
    }

    printf("\nHighest price book name: %s", b1.name);
}