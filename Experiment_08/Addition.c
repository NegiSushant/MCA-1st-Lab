/*
Write a program to  input, output of two matrix with the following function

addition , subtration and transpose
*/
#include<stdio.h>

void input(int mat1[][10], int mat2[][10], int r1, int c1, int r2, int c2);
void addition(int mat1[][10], int mat2[][10], int add[][10], int r1, int c1, int r2, int c2);
void dis(int add[][10], int r1, int c1);
//void transpose(int mat5[][10], int row, int col);

void main(){
    int mat1[10][10], mat2[10][10], add[10][10], r1, c1, r2, c2; 

    printf("Enter the row and column of 1st matrix: ");
    scanf("%d%d", &r1,&c1);

    printf("\nEnter the row and column of 2nd matrix: ");
    scanf("%d%d", &r2,&c2);

    while (r1 != r2 && c1 != c2){
		printf("Error! column and row of each coloumn should be equal.\n");
		printf("Enter rows and column for first matrix: ");
		scanf("%d%d", &r1, &c1);
		printf("Enter rows and column for second matrix: ");
		scanf("%d%d", &r2, &c2);
	}
    input(mat1, mat2, r1, c1, r2, c2);
    addition(mat1, mat2, add, r1, c1, r2, c2);
    dis(add, r1, c1);
}

void input(int mat1[][10], int mat2[][10], int r1, int c1, int r2, int c2){
    printf("Enter element in first matrix: ");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\n\n");

    printf("Enter element in second matrix: ");
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
}


void addition(int mat1[][10], int mat2[][10], int add[][10], int r1, int c1, int r2, int c2){
    // for(int i = 0; i < r1; i++){
    //     for (int j = 0; j < c1; j++){
    //         add[i][j] = 0;
    //     }
    // }

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            add[i][j] = 0;
            add[i][j] += mat1[i][j] + mat2[i][j];
        }
    }
}


void dis(int add[][10], int r1, int c1){
    printf("Addition of number: \n");
    for(int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }
}

