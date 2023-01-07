/*
Ques_3----->>>>>>
                    Write a program to convert octal to hexadecimal and vice versa.
*/

#include<stdio.h>

int main(){
    int num;
    printf("Please enter the number: ");
    scanf("%o",&num);

    printf("Hexadecimal form of %o(octal) is: %X.\n",num, num);
    printf("Octal form of %X(Hexadecimal) is: %o.",num,num);

    return 0;
}