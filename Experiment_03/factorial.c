/*
Ques_2----->>>>>>>
        Write a program to calculate factorial !
*/

#include<stdio.h>
int fact(int);
void main(){
    int n;
    printf("Which number factorial you want: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d",n, fact(n));
}

int fact(int n){
    int fact = 1;
    while (n > 1)
    {
        fact *= n;
        n--;
    }
    return fact;
    
    // if(n == 1){
    //     return 1;
    // }else{
    //     return n * fact(n-1);
    // }
}