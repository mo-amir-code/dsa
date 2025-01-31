#include<stdio.h>

int largest(int a[], int n){
    int l = a[0], i;
    for(i = 1; i < n; i++) {
        if(a[i] > l) l = a[i]; 
    }
    return l;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a[n], i;

    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("\nLargest Element in the array is %d", largest(a, n));

    return 0;
}