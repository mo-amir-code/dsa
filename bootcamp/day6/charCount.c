#include<stdio.h>


int main(){
    int n, i;
    scanf("%d", &n);

    char ch[n];
    printf("enter only small chars: ");
    for(i = 0; i < n; i++){
        scanf("%c", &ch[i]);
    }

    int res = 1, lastCount = 0;
    for(i = 0; i < n; i++){
        if((ch[i]+1) == ch[i+1]) lastCount++;
        else if(lastCount > res){
            res = lastCount;
            lastCount = 0;
        }
    }

    if(lastCount > res) res = lastCount;

    printf("\nMax Consecutive: %d", res);

    return 0;
}