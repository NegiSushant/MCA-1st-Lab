/*
        to concatenate two strings
*/

#include<stdio.h>
char *stringcat(char *dest, char *source);

void main(){
    printf("\n<<<<<---------Concatinate String----------->>>>>");
    char string1[100];
    char string2[100];

    printf("\nEnter the first string: ");
    gets(string1);

    printf("\nEnter the 2nd string: ");
    scanf("%s", string2);

    printf("\nConcatinated Strings is: %s", stringcat(string1, string2));
}

char *stringcat(char *dest, char *source){
    char *temp = dest;
    while (*dest!='\0'){
        dest++;
    }

    while (*source!='\0'){
        *dest = *source;
        source++;
        dest++;
    }
    *dest='\0';
    return temp; 
}