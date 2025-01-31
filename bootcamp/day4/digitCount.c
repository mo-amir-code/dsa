#include<stdio.h>
#include<stdlib.h>

void isArmStrong(int n){
    int power = 0, sum = 0, t;
    t = n;
    while(t > 0){
        power++;
        t /= 10;
    }

    t = n;

    while(t > 0){
        int rem = t%10;
        int s = rem, i;
        for(i = 1; i < power; i++) s *= rem;
        sum += s;
        t /= 10;
    }
    
    if(sum == n){
        printf("\n%d is ArmStrong", sum);
    }

}


int countDigit(int n){
    int c = 0;
    isArmStrong(n);
    while(n > 0){
        c++;
        n /= 10;
    }
    return c;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a[n], i, ans[n];

    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    for(i = 0; i < n; i++){
        ans[i] = countDigit(a[i]);
    }

    printf("\nDigits Count: ");
    for(i = 0; i < n; i++){
        printf(" %d", ans[i]);
    }

    return 0;
}