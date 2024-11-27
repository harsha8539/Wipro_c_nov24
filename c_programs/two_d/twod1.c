#include<stdio.h>

int main() {
    int row = 2, col = 2;
    int matrix1[2][2],matrix2[2][2], sum[2][2];

    printf("enter the elements of the first matrix:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++) {
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("enter the elements of the second matrix:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++) {
            scanf("%d",&matrix2[i][j]);
        }
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            sum[i][j]  = matrix1[i] [j] + matrix2[i][j];
        }
    }

    printf("sum of two matrices: \n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }

    return 0;

}