#include<stdio.h>
#include<string.h>

int main(){
    char ch[20];
    int n, i;
    scanf("%s", &ch);

    n = strlen(ch);
    printf("Size: %d\n", n);
    int isPalindrome = 1;
    for(i = 0; i < n/2; i++){
        if(ch[i] != ch[n-1-i]){
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome == 1){
        printf("String is Palindrome: ");
    }else{
        printf("String is not Palindrome: ");
    }

    return 0;
}