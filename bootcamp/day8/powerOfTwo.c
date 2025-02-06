#include<stdio.h>
#include<stdbool.h>
bool isPowerOfTwo(int n){
    if(n == 2) return true;
    else if(n%2 != 0) return false;
    return isPowerOfTwo(n/2);
}

int main(){
    int n;
    scanf("%d", &n);

    int A[n], i;
    for(i = 0; i < n; i++) scanf("%d", &A[i]);
    printf("\nNumbers Power of two: ");

    int count = 0;
    for(i = 0; i < n; i++){
        if(isPowerOfTwo(A[i])) {
            printf("%d ", A[i]);
            count++;
        };
    }

    printf("\nNumbers count: %d", count);

    return 0;
}