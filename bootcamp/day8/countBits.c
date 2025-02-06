#include<stdio.h>
void binNumber(int n, int *bin){
    if(n == 0) return;
    int rem = n%2;
    *bin = (*bin)*10+rem;
    n = n/2;
    binNumber(n, bin);
}
int revNumber(int *n){
    printf("Rev: %d", *n);
    int rev = 0;
    while(*n > 0){
        int rem = *n%10;
        rev = (rev)*10 + rem;
        *n /= 10;
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int bin = 0;
    binNumber(n, &bin);
    bin = revNumber(&bin);

    printf("\nBinary: %d", bin);

    return 0;
}