#include<stdio.h>

int main(){
    int n, i, f = 1;
    printf("enter any number: ");
    scanf("%d", &n);

    for(i = 2; i <= n / 2; i++){
        if(n%i == 0) {
            f = 0;
            break;
        }
    }

    if(f == 1) printf("Number is prime");
    else printf("Number is not prime");

    return 0;
}