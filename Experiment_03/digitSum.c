/*
Ques_4------>>>>>>>
                Write a program to get addition of a number.!!!
*/
#include<stdio.h>
int digitSum(int);
int main(){
    int num;
    printf("Sum of digit is: %d",digitSum(num));
    return 0;
}

int digitSum(int num){
    int rem, sum = 0;
    printf("Please enter the number: ");
    scanf("%d", &num);

    while (num>0){
        rem = num % 10;
        sum = sum + rem;
        num = num/10;
    }
    return sum;
}
