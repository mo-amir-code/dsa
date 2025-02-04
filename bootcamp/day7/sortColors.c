#include<stdio.h>


int main(){
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int A[n];

    for(i = 0; i < n; i++) scanf("%d", &A[i]);

    int l = 0, m = 0, r = n-1;

    while(m <= r){
        if(A[m] == 2){
            A[m] = A[r];
            A[r] = 2;
            r--;
        }
        if(A[m] == 0){
            A[m] = A[l];
            A[l] = 0;
            l++;
            m++;
        }

        while(m <= r && A[m] == 1) m++;
        while(m <= r && A[r] == 2) r--;
    }

    printf("\n\nSorted Now: \n");


    for(i = 0; i < n; i++) printf("%d ", A[i]);

    return 0;
}