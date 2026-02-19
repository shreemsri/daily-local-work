#include<stdio.h>
int main(){
    int n;
    printf(" enter a no.");
    scanf("%d",&n);
    

    for(int r=n;r<=1;r--){
        for(int s=0; s<=n-1; s++){
            printf(" ");
        }
        for(int c=1;c<=r;c++){
            printf("*");

        }
        printf("\n");
    }
    for(int r=2;r<=n;r++){
        for(int s=0; s<=n-1; s++){
            printf(" ");
        }
        for(int c=1;c<=r;c++){
            printf("*");

        }
        printf("\n");
    }
    
    
    

}
/*#include<stdio.h>
int main(){
    int n;
    printf("enter a no:");
    scanf("%d",&n);
    for(int r=1;r<=n;r++){
        for(int s=n; s>r; s--){
            printf(" ");
        }
        for(int k=1;k<=r;k++){
            printf("*");
        }
        printf("\n");
        

    
}

    
}
*/