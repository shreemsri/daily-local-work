#include<stdio.h>
int main(){
    float r, l,b;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f",&l, &b);
    float areac=(22.0/7.0)*r*r;
    float cric=2*(22.0/7.0)*r;
    printf("%.2f  %.2f\n", areac, cric);
    float arear=l*b;
    float peri=2*(l+b);
    printf("%.2f  %.2f", arear, peri);
    
    

}