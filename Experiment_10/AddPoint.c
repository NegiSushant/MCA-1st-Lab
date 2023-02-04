/*
P2. Write a program to get sum of elements of an array using pointers only.
*/

#include<stdio.h>

//void sum(int *mat[], int *row);

void main(){
    int a[10];
    int *b, sum = 0;
    b = &a[0];

    printf("Enter the 10 element in array: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", b+i);
    }

    for(int i = 0; i < 10; i++){
        sum += *(a+i);

    }

    printf("Sum of all array elements is: %d", sum);
}
