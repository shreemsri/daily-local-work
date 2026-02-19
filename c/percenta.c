#include <stdio.h>
int main(){
    int a,b,c,d,e;
    
    printf("Enter the marks of the subjects1: ");
    scanf("%d", &a);
    printf("Enter the marks of the subjects2: ");
    scanf("%d", &b);
    printf("Enter the marks of the subjects3: ");
    scanf("%d", &c);
    printf("Enter the marks of the subjects4: ");
    scanf("%d", &d);
    printf("Enter the marks of the subjects5: ");
    scanf("%d", &e);

    float p=((a+b+c+d+e)/5.0);
    printf("%.2f", p);


}