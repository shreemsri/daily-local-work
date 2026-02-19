#include<stdio.h>
int main(){
    int r, c;
    printf("enter the no of row in the matrix: ");
    scanf("%d", &r);
    printf("enter the no of columns in the matrix: ");
    scanf("%d", &c);
    int arr[r][c];
    int tarr[c][r];
    printf("Enter the elements: ");

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        
        }
    }
    printf("The matrix is: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf(" %d ", arr[i][j]);

        
        }
        printf("\n");
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            tarr[j][i]=arr[i][j];
        
        }
    }
    printf("The transposed matrix is: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf(" %d ", tarr[i][j]);

        
        }
        printf("\n");
    }

}