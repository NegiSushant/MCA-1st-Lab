/*
            3. to copy of one string into another
*/

#include<stdio.h>
void xstrcpy(char *destination, char *source);


void main(){
    char data[20];
    char copydata[60];
    printf("enter the data: ");
    scanf("%s", data);

    
    printf("enter the copy data: ");
    scanf("%s", copydata);

    xstrcpy(copydata, data);
    printf("Copy Data is: %s\n", copydata);

}

void xstrcpy(char *destination, char *source){
    while(*source!='\0'){
        *destination=*source;
        source++;
        destination++;
    }
    *destination='\0';
}