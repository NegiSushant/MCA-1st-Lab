#include<stdio.h>

// /*-------------Declaring Structure variables separately--------------*/
// struct student
// {
//     char name[10];
//     int age;
//     char section[5];
//     int marks[5];
// };
// //struct Student S1, S2; //declaring variables of struct Student

// /*----------------------Declaring Structure variables with structure definition------------*/
// /*Here S1 and S2 are variables of structure Student. 
// However, this approach is not much recommended*/
// struct student1
// {
//     char name[20];
//     int age;
//     char sec[5];
//     int marks[5];
// }s1, s2;


// /*-----------------------Structure definition using typedef--------------*/
// typedef struct Student2
// {
//     char name[20];
//     int age;
//     char section[5];
//     float marks[5];
// }std;

// void main(){
//     std stud1;
//     printf("Enter the record of student!\n");

//     printf("Enter the name of student: ");
//     scanf("%s", stud1.name);

//     printf("Enter the age: ");
//     scanf("%d", stud1.age);

// }

// /*<<<<<<============Structure Initialization=============>>>>>>>*/
// struct Patient
// {
//     float height;
//     int weight;
//     int age;
// };
// void main(){
//     struct Patient p1 = { 180.75 , 73, 23 }; //initialization

//     //OR
//     struct Patient p1;
//     p1.height = 180.75; //initialization of each member separately
//     p1.weight = 73;
//     p1.age = 23;
// }

/*<<<============ Accessing Structure Members: ========>>>>*/
#include<stdio.h>
#include<string.h>
struct Student
{
    char name[25];
    int age;
    char branch[10];
    //F for female and M for male
    char gender;
};

int main()
{
    struct Student s1;
    /*
    s1 is a variable of Student type and
    age is a member of Student
    */
    s1.age = 18;
    /*
    using string function to add name
    */
    strcpy(s1.name, "Viraaj");
    /*
    displaying the stored values
    */
    printf("Name of Student 1: %s\n", s1.name);
    printf("Age of Student 1: %d\n", s1.age);
    return 0;
}
