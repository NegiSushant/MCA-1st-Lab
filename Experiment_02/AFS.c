/*
Ques_1----->>>>>
                Write a menu driven program to implement basic arithmetic functions using switch and functions!

*/

#include<stdio.h>
int sum(int, int);
int diff(int, int);
int mul(int, int);
int rem(int, int);
int qut(int, int);

void main(){
    int num1, num2;
    printf("Please enter two number: ");
    scanf("%d%d", &num1, &num2);

    char sign;
    fflush(stdin);
    printf("Which Airthmetic Operation you want +, -, X, %%, /,: ");
    scanf("%c", &sign);

    switch (sign){
    case '+':
        printf("Sum = %d",sum(num1, num2));
        break;
    
    case '-':
        printf("Difference = %d",diff(num1, num2));
        break;

    case '*':
        printf("Multiplication = %d",mul(num1, num2));
        break;

    case '%':
        printf("Remmender = %d",rem(num1, num2));
        break;

    case '/':
        printf("Quotient = %d",qut(num1, num2));
        break;


    default:
        printf("Invalid Operation!");
        break;
    }
}

int sum(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int diff(int num1, int num2){
    int diff = num1 - num2;
    return diff;
}

int mul(int num1, int num2){
    int mul = num1 * num2;
    return mul;
}

int rem(int num1, int num2){
    int rem = num1 % num2;
    return rem;
}

int qut(int num1, int num2){
    int qut = num1 / num2;
    return qut;
}