#include<stdio.h>
int sum(int n){
    if(n == 0) return 0;
    printf("%d", n);
    return (n + sum(n-1));
}

int main(){
    int n;
    scanf("%d", &n);

    printf("\nSum = %d", sum(n));

    return 0;
}