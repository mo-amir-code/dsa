#include<stdio.h>


int main(){
    int n;
    scanf("%d", &n);
    int A[n], i, d;
    for(i = 0; i < n; i++) scanf("%d", &A[i]);
    printf("Enter divisible number: ");
    scanf("%d", &d);

    int count = 0, lastCount = 0;

    for(i = 0; i < n; i++){
        if(A[i]%d == 0) lastCount++;
        else if(lastCount > count) {
            count = lastCount;
            lastCount = 0;
        };
    }

    if(lastCount > count) count = lastCount;

    printf("\n Count of consecutive element: %d", count);

    return 0;
}