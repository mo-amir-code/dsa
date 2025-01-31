#include<stdio.h>

void op(){
    int doYouWant = 1;

    do {
        int n, res;
         printf("\nEnter 1 to perform + operation: ");
         printf("\nEnter 2 to perform - operation: ");
         printf("\nEnter 3 to perform * operation: ");
         printf("\nEnter 4 to perform * operation: ");
    
         printf("\nEnter choices: ");
         scanf("%d", &n);
        int a, b;
        printf("\nEnter two numbers: ");
        scanf("%d%d", &a, &b);

        switch(n){
            case 1:
                res = a + b;
                break;
            case 2:
                res = a - b;
                break;
            case 3:
                res = a * b;
                break;
            case 4:
                res = a / b;
                break;
            default: 
               printf("\nPlease enter correct choice!");
               continue;
        }

        printf("\nResult = %d", res);

        printf("\nDo you want to perform action again press 1 or any number: ");
        scanf("%d", &doYouWant);

    }while(doYouWant == 1);
}

int main(){
    op();

    return 0;
}