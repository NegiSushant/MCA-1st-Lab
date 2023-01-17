/*
write a program to read a single dimension array and print using functions. Also, add the following functions to your program.

findminimum()

findmaximum()

findsumofarray()
*/

#include<stdio.h>
void findmin(int[], int);
void findmax(int[], int);
void findSumOfArray(int[],int);
void main(){
    int size;
    printf("Please enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Please enter the element in array: ");

    for (int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    
    findmin(arr, size);
    findSumOfArray(arr, size);
    findmax(arr, size);
}

void findSumOfArray(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    printf("Sum of Element of Array is: %d\n",sum);
}

void findmin(int arr[], int size){
    int min = arr[0];

    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Minimum value of element in array is: %d\n",min);
}

void findmax(int arr[], int size){
    int max = arr[0];

    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Maximum value of element in array is: %d\n",max);
}
