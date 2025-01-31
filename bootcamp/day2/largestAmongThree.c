#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter three number: ");
    scanf("%d%d%d", &a, &b, &c);

    int l = a > b ? a > c ? a : c : b > c ? b : c;

    printf("Largest Number is %d", l);

    return 0;
}