/*#include<stdio.h>
int main(){
    int r1, c1, r2, c2;
    printf("enter the no of row in the matrix1: ");
    scanf("%d", &r1);
    printf("enter the no of columns in the matrix1: ");
    scanf("%d", &c1);
    printf("enter the no of row in the matrix1: ");
    scanf("%d", &r2);
    printf("enter the no of columns in the matrix1: ");
    scanf("%d", &c2);
    if(c1==r2){
        int arr[r1][c1];
        int arr1[r2][c2];
        int arrn[r1][c2];
        printf("Enter the elements for first matrix: ");

        for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            scanf("%d", &arr[i][j]);
        
            }
        }
        printf("Enter the elements for second matrix: ");

        for(int i=0; i<r2; i++){
            for(int j=0; j<c2; j++){
                scanf("%d", &arr1[i][j]);
        
            }
        }
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                arrn[i][j]=0;
                for(int k=0; k<r2; k++){
                    arrn[i][j]+=arr[i][k]*arr1[k][j];
                }   
            }
        }
        printf("The resultant matrix is: \n");
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                printf(" %d ", arrn[i][j]);
                }
                printf("\n");
        }
    }
    else{
        printf("Invalid matrices");
    }   

}
*/
#include <stdio.h>

// Function prototypes
void inputMatrix(int rows, int cols, int matrix[rows][cols], int num);
void multiplyMatrices(int r1, int c1, int r2, int c2, int mat1[r1][c1], int mat2[r2][c2], int result[r1][c2]);
void printMatrix(int rows, int cols, int matrix[rows][cols]);

int main() {
    int r1, c1, r2, c2;

    // Input matrix dimensions
    printf("Enter number of rows in Matrix 1: ");
    scanf("%d", &r1);
    printf("Enter number of columns in Matrix 1: ");
    scanf("%d", &c1);
    printf("Enter number of rows in Matrix 2: ");
    scanf("%d", &r2);
    printf("Enter number of columns in Matrix 2: ");
    scanf("%d", &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Invalid matrices! Multiplication not possible.\n");
        return 0;
    }

    // Declare matrices
    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];

    // Input elements
    inputMatrix(r1, c1, mat1, 1);
    inputMatrix(r2, c2, mat2, 2);

    // Multiply
    multiplyMatrices(r1, c1, r2, c2, mat1, mat2, result);

    // Output
    printf("The resultant matrix is:\n");
    printMatrix(r1, c2, result);

    return 0;
}


    

    