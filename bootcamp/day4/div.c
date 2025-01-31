#include<stdio.h>

void isDiv(int a[], int n){
    int i; 
    for(i = 0; i < n; i++){
        if(a[i]%3 == 0 && a[i]%5 == 0) printf("\n%d is divisible by 3 and 5", a[i]);
        else printf("\n%d is not divisible by 3 and 5", a[i]);
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a[n], i;

    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    isDiv(a, n);


    return 0;
}