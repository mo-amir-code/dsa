#include<stdio.h>


int main(){
    int n, k,t, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter sliding window size: ");
    scanf("%d", &k);
    printf("Enter targeted value: ");
    scanf("%d", &t);

    int A[n], currentSum = 0, count = 0;

    for(i = 0; i < n; i++) scanf("%d", &A[i]);

    for(i = 0; i < k; i++) currentSum += A[i];

    printf("\nsum is %d\n", currentSum);

    for(; i < n; i++){
        if(currentSum == t) count++;
        currentSum -= A[i-k];
        currentSum += A[i];
        printf("sum is %d\n", currentSum);
    }

    printf("\nTarget Match Count is %d", count);

    return 0;
}