#include<stdio.h>
int power(int n){
    if(n == 1) return 2;
    return 2*power(n-1); 
}

int main(){
    int n;
    scanf("%d", &n);
    printf("Power = %d", power(n));

    return 0;
}