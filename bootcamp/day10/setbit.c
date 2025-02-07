#include<stdio.h>
void isSetBit(int k, int n){
    int t = n;
    while(n > 0){
        int lb = n%2;
        k--;
        if(k == 0 && lb == 1){
            printf("\n%d is a set bit", t);
            break;
        }
        n /= 2;
    }
}

int main(){
    int n = 5;
    int A[5] = {10, 4, 11, 12, 7}, i, k;
    printf("Enter a k: ");
    scanf("%d", &k);
    for(i = 0; i < n; i++){
        int num = A[i];
        isSetBit(k, num);
    }

    return 0;
}