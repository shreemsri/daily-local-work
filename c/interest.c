#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t;
    printf("Enter principal amount:");
    scanf("%f",&p);
    printf("Enter rate of interest in (%%):");
    scanf("%f",&r);
    printf("Enter time (in years):");
    scanf("%f",&t);
    float simple_interest = p*r*t/100.0;
    float compound_interest = p*(pow((1+r/100.0),t))-p;
    printf("Simple interesr is: %.2f",simple_interest);
    printf("\nCompound interest is: %.2f",compound_interest);
}