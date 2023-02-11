/*
                 2. to get reverse of one string
*/

#include<stdio.h>
void reverse(char *x, int start, int end);
int strlength(char *name);

void main(){
    printf("\n<<<<<---------Reverse String----------->>>>>");
    char a[100];
    printf("\nEnter the string: ");
    scanf("%s", &a);
    
    reverse(a, 0, strlength(a)-1);
    printf("Reverse order of string is: %s\n", a);
}

void reverse(char *x, int start, int end){
    char c;
    
    if (start >= end){
        return;
    }
    
    c = *(x+start);
    *(x+start) = *(x+end);
    *(x+end) = c;
    
    reverse(x, ++start, --end);
}

int strlength(char *name){
    int len = 0;
    while (*name!='\0'){
        name++;
        len=len+1;
    }
    return len;
    
}