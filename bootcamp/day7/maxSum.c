#include<stdio.h>

int main(){
    int n = 7;
    int A[] = {10, 20, -30, 5, -6, 8, 40};

    int res = 0, lastSum = 0, i;

    for(i = 0; i < n; i++){
        lastSum += A[i];
        if(A[i] > lastSum){
            lastSum = A[i];
        }

        if(lastSum > res) res = lastSum;
    }

    printf("Max Sum of sub array is %d", res);

    return 0;
}