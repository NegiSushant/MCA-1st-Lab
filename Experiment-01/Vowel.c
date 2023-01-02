/*
Ques_4------>>>>>>
                Write a program to check given character is a vowel or not
*/

#include<stdio.h>
void main(){
    char word;
    printf("Please enter the word: ");
    scanf("%c", &word);

    if(word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u' || word == 'A' || word == 'E' || word == 'I' || word == 'O' || word == 'U' ){
        printf("%c is Vowel!", word);
    }else{
        printf("%c is not Vowel!", word);
    }
    printf("\nCompiled By: Sushant Singh Negi!");
    printf("\nL.I. = 2224MCA1117");
}