/*
Ques_5---------->>>>>>>>
                Write program using scanf function to insert space into the string.
*/

#include<stdio.h>

int main(){
    char str[100];
    scanf("%%[^\n]s",&str);
    printf("%s",&str);
 

    return 0;
}