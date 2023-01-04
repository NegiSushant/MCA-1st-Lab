/*
            Ques_1---->>>>>>
                        Write a program to print the Fibonacci series
*/

#include<stdio.h>
void Fibonacci(int);
// int fibbo(int);// For recurssion 

void main(){    
    int num;    
    printf("Enter the number of elements: ");    
    scanf("%d",&num);    
    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);    
    Fibonacci(num-2);//n-2 because 2 numbers are already printed     
 }

void Fibonacci(int num){
    static int n1=0,n2=1,n3;
    if(num>0){
        n3 = n1 + n2;    
        n1 = n2;    
        n2 = n3;    
        printf("%d ",n3);    
        Fibonacci(num-1);    
    }    
}

////recurssive function.
// int fibbo(int num){
//     if(num <= 1){
//         return num;
//     }else{
//         return fibbo(num - 1) + fibbo(num - 2);
//     }
// }
   
//     for(int i=2; i <= num; ++i){
//         n3 = n1 + n2;
//         printf(" %d",n3);
//         n1=n2;
//         n2=n3;
//     }  
// }

