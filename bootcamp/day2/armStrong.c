#include<stdio.h>

int main(){
    int n, p = 0, t, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &n);

    t = n;

    while(t > 0){
        t /= 10;
        p++;
    }

    t = n;

    while(t > 0){
        int rem = t%10;
        int i, s = rem;
        for(i = 1; i < p; i++){
            s *= rem;
        }
        sum += s;
        t /= 10;
    }

    if(sum == n) printf("Number is Armstrong");
    else printf("Number is not armstrong");
    

    return 0;
}