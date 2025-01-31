#include<stdio.h>
void pr(int i , int n){
    if(i > n) return;
    printf(" %d", i);
    pr(i+1, n);
}

int main(){
    int n;
    printf("ENter a  number: ");
    scanf("%d", &n);

    pr(1, n);

    return 0;
}