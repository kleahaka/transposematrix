#include <stdio.h>
#define rowsM 4
#define colsM 4
int main(){
    int A[rowsM][colsM];
    int B[colsM][rowsM];

    int rows , cols;
    printf("Enter elements in matrix of size %d x %d: \n" , rows , cols);

    for(rows = 0 ; rows<rowsM ; rows++){
        for(cols = 0 ; cols < colsM; cols++){
            scanf("%d", &A[rows][cols]);
        }
    }
//Find Transpose of Matrix A
    for(rows = 0 ; rows<rowsM ; rows++){
        for(cols = 0 ; cols < colsM; cols++){
            B[cols][rows]  = A[rows][cols];
        }
    }
    //print matrix A
    printf("\nOriginal matrix: \n");
    for(rows=0; rows<rowsM; rows++)
    {
        for(cols=0; cols<colsM; cols++)
        {
            printf("%d ", A[rows][cols]);
        }

        printf("\n");
    }
   //print matrix B
    printf("Transpose of matrix A: \n");
    for(rows=0; rows<colsM; rows++)
    {
        for(cols=0; cols<rowsM; cols++)
        {
            printf("%d ", B[rows][cols]);
        }
        printf("\n");
    }
}
