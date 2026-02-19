#include<stdio.h>
int main(){
    int num, reversed=0,remainder,original;
    printf("enter a num to check palindrome or not:\n");
    scanf("%d",&num);
    original = num;
    while(num!=0){
        remainder= num%10;
        reversed= reversed*10 + remainder;
        num/=10;
    }if(original==reversed){
        printf("%d num is palindrome:\n", original);

    }else{
        printf("%d num is notpalindrome:\n", original);
    }
    return 0;
}