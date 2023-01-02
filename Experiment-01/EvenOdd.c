/*
Ques_2---->>>>>
        Write a program to check the given number is Even or  odd!
*/
#include<stdio.h>
void main(){
    int num;
    printf("Please enter the Number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d is Even Number!", num);
    }else{
        printf("%d is Odd Number!", num);
    }
    printf("\nCompiled By: Sushant Singh Negi!");
    printf("\nL.I. = 2224MCA1117");
}