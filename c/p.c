#include<stdio.h>
int main(){
    int r, c;
    printf("enter the no of elements in the matrix: ");
    scanf("%d", &r);
    int a[r];
    printf("Enter the elements for matrix: ");

    for(int i=0; i<r; i++){
            scanf("%d", &a[i]);
        
        }
    
    int e=0;
    int o=0;
    for(int i=0; i<r; i++){
            if(a[i]%2==0){
                e+=1;
            }
            else{
                o+=1;
            }
        
        }
    printf("No of odd no.s is: %d\n",o);
    printf("No of even no.s is: %d\n",e);
    printf("the even no.s are: \n");
    for(int i=0; i<r; i++){
        
        if(a[i]%2==0){
            printf("%d\n", a[i]);
        }  
    } 
    printf("the odd no.s are: \n");
    for(int i=0; i<r; i++){
        
        if(a[i]%2!=0){
            printf("%d\n", a[i]);
        }  
    }  
    }  

