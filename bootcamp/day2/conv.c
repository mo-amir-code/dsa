#include<stdio.h>

int main(){
    float cm, kg;
    printf("Enter cm: ");
    scanf("%f", &cm);
    printf("Enter kg: ");
    scanf("%f", &kg);

    printf("\ncm in m: %.2f", cm/100);
    printf("\nkg in g: %.2f", kg*1000);

    return 0;
}