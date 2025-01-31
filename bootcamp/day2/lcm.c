#include<stdio.h>
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b){
    int g = gcd(a, b);
    printf("GCD: %d", g);
    return (a*b)/g;
}

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("\nLCM: %d", lcm(a, b));

    return 0;
}