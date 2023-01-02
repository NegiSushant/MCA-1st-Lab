/*
Ques_3------>>>>>>
            3. Write a program to check the given year is Leap year or not
*/

#include<stdio.h>

void main(){
    int year;
    printf("Please enter Year: ");
    scanf("%d", &year);

    if(year % 100 == 0){
        if(year % 400 == 0){
            printf("%d is a Leap year!", year);
        }else{
            printf("%d is not a Leap Year!", year);
        }
    }else{
        if(year % 4 == 0){
            printf("%d is Leap Year!", year);
        }else{
            printf("%d is not Leap Year!", year);
        }
    }
    printf("\nCompiled By: Sushant Singh Negi!");
    printf("\nL.I. = 2224MCA1117");
}