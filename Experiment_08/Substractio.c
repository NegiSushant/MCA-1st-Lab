/*
            Write a program to  input, output of two matrix with the following function

            addition , subtration and transpose
*/
#include<stdio.h>
void substraction(int mat1[][11], int mat2[][11], int sub[][11], int r1, int c1, int r2, int c2);
void input(int mat1[][11], int mat2[][11], int r1, int c1, int r2, int c2);
void disp(int sub[][11], int r1, int c1);

void main(){

    int mat1[11][11], mat2[11][11], sub[11][11], r1, c1, r2, c2;

    printf("Enter the row and column of 1st matrix: ");
    scanf("%d%d", &r1,&c1);

    printf("\nEnter the row and column of 2nd matrix: ");
    scanf("%d%d", &r2, &c2);

    while(r1 != r2 && c1 != c2){
        printf("Error! column and row of each coloumn should be equal.\n");
		printf("Enter rows and column for first matrix: ");
		scanf("%d%d", &r1, &c1);
		printf("Enter rows and column for second matrix: ");
		scanf("%d%d", &r2, &c2);
    }

    input(mat1, mat2, r1, c1, r2, c2);
    substraction(mat1, mat2, sub, r1, c1, r2, c2);
    disp(sub, r1, c1);
}

void input(int mat1[][11], int mat2[][11], int r1, int c1, int r2, int c2){
    printf("Enter the elment in first matrix: ");
    for (int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter the elment in second matrix: ");
    for (int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
}


void substraction(int mat1[][11], int mat2[][11], int sub[][11], int r1, int c1, int r2, int c2){
    // for(int i = 0; i < r1; i++){
    //     for(int j = 0; j < c1; j++){
    //         sub[i][j] = 0;
    //     }
    // }

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
             sub[i][j] = 0;
            sub[i][j] += mat1[i][j] - mat2[i][j];
        }
    }
}

void disp(int sub[][11], int r1, int c1){
    printf("Substraction of matrix is: ");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
}
