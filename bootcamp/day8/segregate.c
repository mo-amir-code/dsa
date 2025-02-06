#include<stdio.h>


int main(){
    int n;
    scanf("%d", &n);

    int A[n], i;
    for(i = 0; i < n; i++) scanf("%d", &A[i]);

    int l = 0, r = n - 1;

    while(l < r){
        if(A[l] < 0){
            int t = A[l];
            A[l] = A[r];
            A[r] = t;
            r--;
        }

        while(l < r && A[l] >= 0) l++;
        while(l < r && A[r] < 0) r--;
    }

    printf("\nAfter Segregate: ");

    for(i = 0; i < n; i++) printf("%d ", A[i]);

    return 0;
}