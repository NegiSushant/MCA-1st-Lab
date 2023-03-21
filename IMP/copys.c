#include<stdio.h>

void copy(char *a, char *b);

void main(){
    char a[20];
    char b[30];

    printf("Enter the string1: ");
    gets(a);

    printf("Enter the string2: ");
    gets(b);

    copy(b, a);

    printf("%s", b);
}

void copy(char *a, char *b){
    while(*a!='\0'){
        *b=*a;
        a++;
        b++;
    }
    *b='\0';

}