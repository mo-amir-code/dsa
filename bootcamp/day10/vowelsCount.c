#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isVowel(char ch){
    int chVal = ch, i = 1;
    int asciiVal = chVal < 97 ? 65 : 97;
    while(i <= 5){
        if(chVal == asciiVal) return true;
        asciiVal += i >= 3 ? 6 : 4;
        i++;    
    }
    return false;
}

int main(){
    char str[50], n;
    scanf("%s", &str);

    n = strlen(str);
    int vowelCount = 0, i;
    for(i = 0; i < n; i++){
        if(isVowel(str[i])) vowelCount++;
    }

    printf("Vowels in the string: %d", vowelCount);

    return 0;
}