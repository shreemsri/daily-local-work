#include<stdio.h>
int main(){
    int n, e=0, o=0;
    printf("enter a no: ");
    scanf("%d",&n);
    for(int i=n; i>=0; i--){
        if(i%2==0){
            e=e+i;
        }
        else if(i==0){
            printf("invalid");
        }
        else{
            o=o+i;
        }
    }
    printf("Sum of even no.s: %d\n", e);
    printf("Sum of odd no.s: %d", o);
}