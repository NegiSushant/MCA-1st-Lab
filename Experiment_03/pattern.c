/*
        Ques_3: write a program to print the following star pattern:
                            *
                            * *
                            * * *
                            * * * *
                            * * * * *
*/
#include<stdio.h>

void main(){
    int n, row, col;
    printf("Please enter the number of row: ");
    scanf("%d",&n);

    for(row = 1; row <= n; row++){
        for(col = 1; col <= row; col++){
            printf("* ");
        }
        printf("\n");
    }
}