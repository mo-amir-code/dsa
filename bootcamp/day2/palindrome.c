#include<stdio.h>

int main(){
    int n, i, rev = 0, t;
    printf("enter any number: ");
    scanf("%d", &n);

    t = n;

    while(t > 0){
        int rem = t%10;
        rev = rev*10 + rem;
        t /= 10;
    }

    if(n == rev) printf("Number is palindrome");
    else printf("Number is not palindrome");
    
    
    return 0;
}