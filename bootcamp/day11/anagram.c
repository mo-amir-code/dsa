#include<stdio.h>
#include<stdbool.h>

int main(){
    char str1[20], str2[20];
    printf("Enter a string: ");
    scanf("%s", &str1);

    printf("Enter one more string: ");
    scanf("%s", &str2);

    int m = 0;
    int n = 0;

    // 
      for(int i = 0; i < 20; i++){
        if(str1[i] == '\0') break;
        m++;
      }
      for(int i = 0; i < 20; i++){
        if(str2[i] == '\0') break;
        n++;
      }
    // 
    int i;

    bool isAnagram = true;

    if(m == 0 || m != n) isAnagram = false;

    char atoz[26] = {0};

    for(i = 0; i < m; i++){
        int asciiVal = str1[i] - 97;
        atoz[asciiVal]++;
    }

    for(i = 0; i < n; i++){
        int asciiVal = str2[i] - 97;
        if(--atoz[asciiVal] < 0){
            isAnagram = false;
            break;
        }
    }

    if(isAnagram){
        printf("String is anagram");
    }else{
        printf("String is not anagram");
    }

    return 0;
}