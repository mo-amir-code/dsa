#include<stdio.h>

int main(){
    int n, i, j;
    scanf("%d", &n);

    for(i = 0; i< n; i++){
        for(j = 0; j < n - 1 - i; j++) printf(" ");
        for(j = 0; j <= i*2; j++) printf("*");
        printf("\n");
    }

    printf("\n\n");

     for(i = n-1; i >= 0; i--){
        for(j = 0; j < n - 1 - i; j++) printf(" ");
        for(j = 0; j <= i*2; j++) printf("*");
        printf("\n");
    }


    printf("\n\n");

    for(i = 0; i < n; i++){
        for(j = 0; j < n - 1 - i; j++) printf(" ");
        for(j = 1; j < i + 1; j++) printf("%d", j);
        for(; j >= 1; j--) printf("%d", j);
        printf("\n");
    }

    printf("\n\n");

    for(i = n-1; i >= 0; i--){
        for(j = 0; j < n - 1 - i; j++) printf(" ");
        for(j = 1; j < i + 1; j++) printf("%d", j);
        for(; j >= 1; j--) printf("%d", j);
        printf("\n");
    }

    return 0;
}