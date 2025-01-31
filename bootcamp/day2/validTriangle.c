#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter triangle angles: ");
    scanf("%d%d%d", &a, &b ,&c);

    
    if(c < (a+b) && a < (b+c) && b < (a+c)) printf("This is a valid triangle");
    else printf("Triangle is not valid");

    return 0;
}