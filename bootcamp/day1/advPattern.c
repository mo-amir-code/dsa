#include<stdio.h>

int main(){
    int i, j, n;
    scanf("%d", &n);

    for(i = 0; i < n*2-1; i++){
        int count = 0;
        for(j = 0; j <= n*2 - 1 - (n-i); j++) {
            if(j < (n-i-1) || (i >= n && j <= (i%n))) printf(" ");
            else if((j >= (n-i-1) && j < n) || (i >= n && j <= (i%n))){
                count++;
                printf("%d", count);
                if(count == (i+1)) count--;
            }else{
                printf("%d", count);
                count--;
            }
        };
        printf("\n");
    }


    return 0;
}