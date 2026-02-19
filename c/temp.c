#include <stdio.h>
int main(){
    float c,f;
    printf("Enter the temp in celcius: ");
    scanf("%f",&c);
    f=((9*c)/5)+32;
    printf("the temp in farenheit is %f ", f);
}