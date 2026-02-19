#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bool c= false;
    int b;
    scanf("%d", &b);
    for(int i=0; i<n-b+1; i++){
        for(int j=0+i; j<3+i; j++){
            if(arr[j]<0){
                printf("%d ", arr[j]);
                c=true;
                break;
            }
            c=false;

        }
        if(c==false){
            printf("%d ", 0);
        }
    }

}