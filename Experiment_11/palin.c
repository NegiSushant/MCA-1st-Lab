/*
            6. to check given string is palindrome or not
*/

#include <stdio.h>
int strlength(char *name);


int main(){
    char string1[20];
    int i, len;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s", string1);
    
    len = strlength(string1);
    
    for(i = 0; i < len; i++){
        if(string1[i] != string1[len - i - 1]){
            flag = 1;
            break;
           }
        }
    
    if (flag) {
        printf("%s is not a palindrome", string1);
    }    
    else {
        printf("%s is a palindrome", string1);
    }
    return 0;
}

int strlength(char *name){
    int len = 0;
    while (*name!='\0'){
        name++;
        len=len+1;
    }
    return len;
    
}