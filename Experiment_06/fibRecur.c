/*
Ques---->>>>>
            Fib(n) //to calculate nth fibbonacci term.
*/

#include<stdio.h>
int Fib(int);

void main(){
    int n;
    printf("Enter the number which term you want: ");
    scanf("%d", &n);
    printf("%dth term of fibonacci series is: %d",n, Fib(n));
}

int Fib(int n){
    if(n <= 1){
        return n;
    }else{
        return Fib(n - 1) + Fib(n - 2);
    }
}
