#include <stdio.h>
int main(){
    int a;
    float b;
    printf("Enter first no: ");
    scanf("%d", &a);
    printf("Enter second no: ");
    scanf("%f", &b);
    float s=a+b;
    printf("the sum of the given no.s is %.2f",s);
}
