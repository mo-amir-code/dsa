#include<stdio.h>

int main(){
    int n;
    do{
      printf("Enter size of array: ");
      scanf("%d", &n);

      if(n == 0) printf("Enter array size greater than 0: \n");
    }while(n == 0);
    
    printf("Size: %d \n", n);

    int A[n], i;
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    int maxSum = 0, smallestSum = 10000, j;
    for(i = 0; i < n; i++){
        int currentSum = 0;
        for(j = i; j < n; j++) currentSum += A[j];
        if(currentSum > maxSum) maxSum = currentSum;
        if(smallestSum > currentSum) smallestSum = currentSum;
    }

    printf("\n Max sum of sub array is %d", maxSum);
    printf("\n Smallest sum of sub array is %d", smallestSum);

    return 0;
}