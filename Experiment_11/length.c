/*
Experiment-11 : WAP to implement string manipulation functionAssignment
Implement following function based upon strings

        1. To calculate the length of the string

        2. to get reverse of one string

        3. to copy of one string into another

        4. to compare one string with another to know are both same or not

        5. to concatenate two strings

        6. to check given string is palindrome or not
*/

#include<stdio.h>
int strlength(char *name);

void main(){
        printf("\n<<<<<---------Length of String----------->>>>>");
        char name[200];
        printf("\nEnter the string: ");
        scanf("%s", name);
        
        int len = strlength(name);
        printf("Length of string is: %d", len);
}

int strlength(char *name){
    int len = 0;
    while (*name!='\0'){
        name++;
        len=len+1;
    }
    return len;
    
}
