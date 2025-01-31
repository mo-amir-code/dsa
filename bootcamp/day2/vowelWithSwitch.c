#include<stdio.h>

int main(){
    char c;
    int f = 0;
    printf("Enter any character: ");
    scanf("%c", &c);

    switch(c){
        case 'a': f = 1; break;
        case 'e': f = 1; break;
        case 'i': f = 1; break;
        case 'o': f = 1; break;
        case 'u': f = 1; break;
        default: f = 0;
    }

    if(f == 1) printf("Character is a vowel");
    else printf("Character is a consonent");
    

    return 0;
}