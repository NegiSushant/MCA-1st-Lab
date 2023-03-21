#include<stdio.h>

char *com(char *, char *);

void main(){
    char str1[100], str2[100];
    printf("Enter the two string: ");
    scanf("%s%s",str1, str2);

    printf("%s", com(str1, str2));
}
char *com(char *dest, char *source){
    char *temp = dest;
    while (*dest != '\0'){
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