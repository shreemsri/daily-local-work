#include<stdio.h>
int main(){
    int r, c;
    printf("enter the no of row in the matrix: ");
    scanf("%d", &r);
    printf("enter the no of columns in the matrix: ");
    scanf("%d", &c);
    int arr[r][c];
    int arr1[r][c];
    int tarr[c][r], tarr1[c][r];
    int re[r][c];
    printf("Enter the elements for first matrix: ");

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        
        }
    }
    printf("Enter the elements for second matrix: ");

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr1[i][j]);
        
        }
    }
    printf("The first matrix is: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf(" %d ", arr[i][j]);

        
        }
        printf("\n");
    }
    printf("The second matrix is: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf(" %d ", arr1[i][j]);

        
        }
        printf("\n");
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            tarr[j][i]=arr[i][j];
        
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            tarr1[j][i]=arr1[i][j];
        
        }
    }
    printf("The transposed first matrix is: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf(" %d ", tarr[i][j]);

        
        }
        printf("\n");
    }
    printf("The transposed second matrix is: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf(" %d ", tarr1[i][j]);

        
        }
        printf("\n");
    }
    printf("The resultant matrix is: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            re[i][j]=arr[i][j]+arr1[i][j];
            printf(" %d ", re[i][j]);

        
        }
        printf("\n");
    }

}