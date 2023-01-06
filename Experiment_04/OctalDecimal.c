/*
Ques_1----->>>>>>
                Write program to convert decimal to octal using format specifier and vice-versa!
*/

#include<stdio.h>

int main(){
    int num;
    printf("Please enter the number: ");
    scanf("%d", &num);

    printf("Octal of %d(decimal) is: %o.\n",num, num);
    printf("Decimal of %o(octal) is: %d.",num, num);
    return 0;
}