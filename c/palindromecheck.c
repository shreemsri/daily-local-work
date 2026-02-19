#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("enter the no. (every digit space separated): ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);

    }
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        if(arr[i]==arr[len-i]){
            int a=1;
        }
        else{
            int a=0;
        }
    }
    if(a==1){
        printf("palindrome");
    }
    else{
        printf("not");
    }
    
    


}