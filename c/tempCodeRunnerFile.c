#include<stdio.h>
int main(){
    int n;
    printf("enter the no: ");
    scanf("%d",&n);
    for(int i=n; i>=1; i--){
        for(int c=1; c<=i; c++){
            printf(" %s ", "*");
        }
        printf("\n");
    }
}