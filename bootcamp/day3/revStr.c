#include<stdio.h>
void rev(int l, int r, char s[]){
    if(l >= r) return;
    char c = s[l];
    s[l] = s[r];
    s[r] = c;
    rev(l+1, r-1, s);
}

int main(){
    char s[4];
    printf("Enter a str: ");
    scanf("%s", &s);
    rev(0, 3, s);
    printf("\n String = %s", s);
    return 0;
}