#include<stdio.h>

int main(){
    int n, i;
    printf("Enter any number: ");
    scanf("%d", &n);

    int A[n];


    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    int l = 0, r = n - 1;

    while(l < r){
        if(A[l] == 0){
            A[l] = A[r];
            A[r] = 0;
            r--;
        }

        while(l < r && A[r] == 0) r--;
        l++;
    }

    printf("\n");

    for(i = 0; i < n; i++){
        printf("%d ", A[i]);
    }

    

    return 0;
}