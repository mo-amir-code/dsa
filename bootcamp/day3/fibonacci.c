#include<stdio.h>
void fibonacci(int a, int b, int n){
    if(n==0) return;
    int newNum = a + b;
    printf("\n%d", newNum);
    fibonacci(b, newNum, n - 1); 
}


int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("0\n1");
    fibonacci(0, 1, n-2);

    return 0;
}