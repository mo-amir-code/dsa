#include<stdio.h>

int main(){
    char c;
    printf("Enter any character: ");
    scanf("%c", &c);

    if(c == 'a' || c == 'e' | c == 'i' || c == 'o' || c == 'u') printf("Character is a vowel");
    else printf("Character is a consonent");

    return 0;
}