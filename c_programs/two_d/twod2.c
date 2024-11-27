#include<stdio.h>

int main() {
    int row, col;

    printf("enter the number of row");
    scanf("%d",&row);
    printf("enter the number of col");
     scanf("%d",&col);

     int matrix[row] [col] , transpose[col][row];


     printf("enter the elements of matrix:\n");
     for(int i = 0; i<row;i++) {
        for(int j = 0;j < col;j++) {
            printf("enter elements[%d] [%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        
     }
     for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transpose
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}