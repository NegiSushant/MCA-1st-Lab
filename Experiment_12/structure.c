/*
1. Write a program to insert 10 records in a structure array as per the following structure
a. name
b. age
c. semester
d. marks

2. Display the name of student, who has scored the highest marks using the pointer to the structure
3. Display total marks of all students

*/
#include<stdio.h>

typedef struct student{
    char name[30];
    int age;
    int sem;
    float marks[5];
    float total;
    float tmarks;
} s1;

void main(){

    s1 s[10];
    s1 *stud;
    stud = s;

    for (int i = 0; i < 10; i++) {
        printf("\nEnter name of student %d: ",i+1);
        fflush(stdin);
        gets(stud[i].name);

        printf("\nEnter the age of student %d: ",i+1);
        scanf("%d", &stud[i].age);

        printf("\nEnter the semester of %d student: ",i+1);
        scanf("%d", &stud[i].sem);

        printf("\nEnter the marks of %d student: ",i+1);
        for(int j = 0; j < 5; j++){
            printf("\nEnter the marks of subject %d of %d student: ", j+1, i+1);
            scanf("%f", &stud[i].marks[j]);
        }
    }


    printf("\nDisplaying Information of student Who score highest marks:\n\n");
    
    stud = s;
    for (int i = 0; i < 10; ++i) {
        for(int j = 0; j < 5; j++){
            stud->total = stud->total + stud ->marks[j];
        }
        stud++;
    }

    stud = s;
    float max;
    max = stud -> total;

    for(int i = 0; i < 10; i++){
        if(max < (stud ->total)){
            max =(stud->total);
        }
        stud++;
    }
    
    stud = s;
    for(int i = 0; i < 10; i++){
        if(stud -> total== max){
            printf("\nName of student scoring highest marks is: %s", stud->name);   
        }
        stud++;
    }


    printf("\nDisplay total marks of all students\n\n");
    stud = s;
    for(int i = 0; i < 10; i++){
        stud-> tmarks = 0;
        for(int j = 0; j < 5; j++){
            stud-> tmarks = stud->tmarks + stud->marks[j];
        }
        stud++;
    }
    stud = s;
    for(int i = 0; i < 10; i++){
        printf("\nTotal marks of %s is: %2f", stud->name, stud->tmarks);
        stud++;
    }    
}
