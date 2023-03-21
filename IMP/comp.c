#include<stdio.h>
int comp(char[], char[]);

void main(){
    char str1[30], str2[30];
    printf("Enter two string: ");
    scanf("%s%s", str1, str2);

    int c = comp(str1, str2);
    if(c == 0){
        printf("Strings are same!");
    }else{
        printf("Strings are not same!");
    }
}
int comp(char soruce[], char dest[]){
    int flag = 0, i=0;
    while (soruce[i]!='\0'&& dest[i]!='\0')
    {
        if (soruce[i]!=dest[i]){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0){
        return 0;
    }else{
        return 1;
    }
    
}