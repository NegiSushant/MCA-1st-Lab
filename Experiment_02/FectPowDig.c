/*
    Que_2---->>>>>>
                 Write a menu driven program to implement factorial, X to the power y, additions of digits of a number using switch and functions
*/

#include<stdio.h>
int powerOf(int, int);
int fact(int num);
int sumOfDigit(int);

void main(){
    int digit, num, num1, power;
    int choice;
    printf("To perform Factorial press 1, for power press 2 and for digit of Sum press 3: ");
    scanf("%d", &choice);


    switch (choice){
    case 1:
        printf("factorial of number is: %d:", fact(num));
        break;
    
    case 2:
        printf("Power of number is: %d", powerOf(num1, power));
        break;

    case 3:
        printf("Sum of digit:%d", sumOfDigit(digit));
        break;

    default:
        printf("Invalid Input!");
        break;
    }
    printf("\n Compiled By: Sushant Singh Negi!");
    printf("\n Lib. ID : 2224MCA1117");
}


int fact(int num){
    int facto = 1;
    int i;
    printf("Please enter the number: ");
    scanf("%d", &num);

    for(i = num; i>1; i--){
        facto = facto * i;
    }
    return facto;
}


int powerOf(int num1, int power){
    printf("Please enter the number: ");
    scanf("%d", &num1);

    printf("Enter the power of number: ");
    scanf("%d", &power);

    int fact = 1;
    for(int i = power; i >= 1; i--){
        fact *= num1;
    }
    return fact;
}


int sumOfDigit(int digit){
    int rem, sum = 0;
    printf("Please enter the Number: ");
    scanf("%d", &digit);

    while(digit > 0){
        rem = digit % 10;
        sum =sum + rem;
        digit = digit / 10;
    }
    return sum;
}
