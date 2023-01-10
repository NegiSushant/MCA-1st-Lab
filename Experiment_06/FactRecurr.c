/*
Ques--->>>>>
        Factorial(n) // to calculate factorial of a given number.
*/

#include<stdio.h>
int Factorial(int);

void main(){
    int n;
    printf("Please enter the number: ");
    scanf("%d", &n);

    printf("Factorial of %d is: %d", n, Factorial(n));
}

int Factorial(int n){
    int fact = 1;
    if(n == 1){
        return 1;
    }else{
        return n * Factorial(n-1);
    }
    return fact;
}
