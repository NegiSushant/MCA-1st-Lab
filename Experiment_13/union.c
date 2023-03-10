/*
Ques--->>>> 1. Write a program to differentiate union and structure
*/

#include <stdio.h>  
#include <string.h>  
// declaring structure  
struct struct_example  {  
    int integer;  
    float decimal;  
    char name[20];  
};  
// declaraing union  
union union_example  
{  
    int integer;  
    float decimal;  
    char name[20];  
};  

void main()  
{  
    // creating variable for structure and initializing values difference six  
    struct struct_example stru ={5, 15.2, "John"};  
      
    // creating variable for union and initializing values  
    union union_example uni = {5, 15.3, "John"};  
             
    printf("data of structure:\n integer: %d\n decimal: %.2f\n name: %s\n", stru.integer, stru.decimal, stru.name);  
    printf("\ndata of union:\n integer: %d\n" "decimal: %.2f\n name: %s\n", uni.integer, uni.decimal, uni.name);  
    
    // difference five  
    // printf("\nAccessing all members at a time:");   
    // stru.integer = 163;  
    // stru.decimal = 75;  
    // strcpy(stru.name, "John");  
    // printf("\ndata of structure:\n integer: %d\n " "decimal: %f\n name: %s\n", stru.integer, stru.decimal, stru.name);  
      
    // uni.integer = 163;  
    // uni.decimal = 75;  
    // strcpy(uni.name, "John");  
    // printf("\ndata of union:\n integeer: %d\n " "decimal: %f\n name: %s\n", uni.integer, uni.decimal, uni.name);  
      
    // printf("\nAccessing one member at a time:");  
    // printf("\ndata of structure:");  
    // stru.integer = 140;  
    // stru.decimal = 150;  
    // strcpy(stru.name, "Mike");  
      
    // printf("\ninteger: %d", stru.integer);  
    // printf("\ndecimal: %f", stru.decimal);  
    // printf("\nname: %s", stru.name);  
      
    // printf("\ndata of union:");  
    // uni.integer = 140;  
    // uni.decimal = 150;  
    // strcpy(uni.name, "Mike");  
      
    // printf("\ninteger: %d", uni.integer);  
    // printf("\ndecimal: %f", uni.decimal);  
    // printf("\nname: %s", uni.name);  
        
    //difference four  
    printf("\nAltering a member value:\n");  
    stru.integer = 512;  
    printf("data of structure:\n integer: %d\n decimal: %.2f\n name: %s\n", stru.integer, stru.decimal, stru.name);  
    uni.integer = 512;  
    printf("data of union:\n integer: %d\n decimal: %.2f\n name: %s\n", uni.integer, uni.decimal, uni.name);   
      
    // difference two and three  
    printf("\nsizeof structure: %d\n", sizeof(stru));  
    printf("sizeof union: %d\n", sizeof(uni));  
}  