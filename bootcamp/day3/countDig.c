#include<stdio.h>
int countDig(int n, int c){
    if( n == 0) return c;
    return countDig(n/10, c+1);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\n Count of digit = %d", countDig(n, 0));
    return 0;
}