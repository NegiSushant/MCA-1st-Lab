#include<stdio.h>

void input(int mat1[][10], int mat2[][10], int r1, int c1, int r2, int c2);
void Multi(int mat1[][10], int mat2[][10], int mul[][10], int r1, int c1, int r2, int c2);
void display(int mul[][10], int r1, int c2);

void main(){
    int mat1[10][10], mat2[10][10], mul[10][10], r1, c1, r2, c2;

    printf("Enter the row and col of first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter the row and col of second matrix: ");
    scanf("%d%d", &r2, &c2);

    while (c1 != r2){
		printf("Error! column of first matrix not equal to row of second.\n");
		printf("Enter rows and column for first matrix: ");
		scanf("%d%d", &r1, &c1);
		printf("Enter rows and column for second matrix: ");
		scanf("%d%d", &r2, &c2);
	}

    input(mat1, mat2, r1, c1, r2, c2);

    Multi(mat1, mat2, mul, r1, c1, r2, c2);

    display(mul, r1, c2);

}

void input(int mat1[][10], int mat2[][10], int r1, int c1, int r2, int c2){
    printf("Enter the elements in first matrix(%d X %d): ", r1, c1);
    for (int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\n\n");

    printf("Enter the elemnt in second matrix(%d x %d): ", r2, c2);
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    
}

void Multi(int mat1[][10], int mat2[][10], int mul[][10], int r1, int c1, int r2, int c2){
    // for(int i = 0; i < r1; i++){
    //     for(int j = 0; j < c2; j++){
    //         mul[i][j] = 0;
    //     }
    // }
    for(int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
             mul[i][j] = 0;
            for(int k = 0; k < c1; k++){
                mul[i][j] =mul[i][j] +  mat1[i][k] * mat2[k][j];
            }
        }
        
    }
}

void display(int mul[][10], int r1, int c2){
    printf("Multiplication of Matrixes is: \n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
}

