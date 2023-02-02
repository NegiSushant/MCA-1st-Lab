/*
            Write a program to  input, output of two matrix with the following function

            addition , subtration and transpose
*/

#include <stdio.h>
void trns(int mat[][11], int trans[][11], int r, int c);
void input(int mat[][11], int r, int c);
void disp(int trans[][11], int r, int c);


void main(){
    int mat[11][11], trans[11][11], r, c;
    
    printf("Enter the rows and columns of the matrix : ");
    scanf("%d %d", &r, &c);

    input(mat, r, c);
    trns(mat, trans, r, c);
    disp(trans, r, c);

}


void input(int mat[][11], int r, int c){
    printf("Enter the element in array: ");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void trns(int mat[][11], int trans[][11], int r, int c){
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            trans[j][i] = 0;
            trans[j][i] = mat[i][j];
        }
    }
}

void disp(int trans[][11], int r, int c){
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
}