#include<stdio.h>
int fact(int n){
    return n == 2 ? 2 : (n*fact(n-1));
}

int main(){
    int n;
    scanf("%d", &n);
    printf("\nFact: %d", fact(n));
    return 0;
}