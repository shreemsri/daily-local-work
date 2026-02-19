#include<stdio.h>
int main(){
    int n, a, x, b;
    float y;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter a, x, b: ");
    scanf("%d %d %d", &a, &x, &b);
    switch(n){
        case 1: y=(a*x)%b; printf("%.2f",y); break;
        case 2: y=(a*x*x)+(b*b); printf("%.2f",y); break;
        case 3: y=a+(x/b); printf("%.2f",y); break;
    }
}