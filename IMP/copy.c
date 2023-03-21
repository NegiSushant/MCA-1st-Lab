#include<stdio.h>

char copy(char *, char*);

void main(){
    char str1[30], str2[30];
    printf("Enter the two string: ");
    scanf("%s%s", str1, str2);

    copy(str1, str2);
    printf("after the copy: %s", str1);

}
char copy(char *data, char *cdata){
    while (*cdata != '\0'){
        *data=*cdata;
        cdata++;
        data++;
    }
    *data='\0';
}