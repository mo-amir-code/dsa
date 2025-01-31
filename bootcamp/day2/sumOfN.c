#include<stdio.h>

int main(){
    int n, i, s = 0;
    printf("Enter any number:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) s+= i; 

    printf("\n Sum of %d this number: %d", n, s);

    return 0;
}