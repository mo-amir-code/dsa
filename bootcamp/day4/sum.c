#include<stdio.h>
#include<stdbool.h>

int sum(int a[], int n, bool isEven){
    int sum = 0, i;

    for(i = 0; i < n; i++){
        if(isEven && a[i]%2 == 0) sum += a[i];
        else if(!isEven && a[i]%2 != 0) sum += a[i];
    }

    return sum;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a[n], i;

    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    int evenSum = sum(a, n, true);
    int oddSum = sum(a, n, false);

    printf("\n Even Sum = %d", evenSum);
    printf("\n Odd Sum = %d", oddSum);

    return 0;
}