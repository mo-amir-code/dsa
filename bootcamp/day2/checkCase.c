#include<stdio.h>

int main(){
    char c;
    scanf("%c", &c);


    if(c >= 'a' && c <= 'z') printf("Lowercase character");
    else if(c >= 'A' && c <= 'Z') printf("Uppercase character");
    else printf("Special Character");

    return 0;
}