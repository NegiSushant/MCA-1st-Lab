/*
Ques_2----->>>>>
                Write a program to convert decimal to hexadecimal using formate specifer and vice versa!
*/

#include<stdio.h>

int main(){
    int num;
    printf("Please enter the number: ");
    scanf("%d", &num);

    printf("Hexadecimal for of %d is: %X.\n",num, num);
    printf("Decimal form of %X is: %d.",num, num);
    return 0;
}