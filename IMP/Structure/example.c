#include<stdio.h>

struct marks{
    int sub1;
    int sub2;
    int sub3;
    int total;
};

void main(){
    int i;
    struct marks student[3] = {
        {45, 67, 81, 0},
        {75, 53, 69, 0},
        {57, 36, 71, 0}
    };
    struct marks total;

    for(i = 0; i <= 2; i++){
        student[i].total = student[i].sub1 + student[i].sub2 + student[i].sub3;
        total.sub1 = total.sub1 + student[i].sub1;
        total.sub2 = total.sub2 + student[i].sub2;
        total.sub3 = total.sub3 + student[i].sub3;

        total.total = total.total + student[i].total;
    }
    printf("Student Total\n\n");
    for(i = 0; i <=2; i++){
        printf("Student[%d] %d\n", i+1,student[i].total);

    }
    printf("\nSubject Total\n\n");
    printf("%s %d\n%s %d\n%s %d\n",
        "Subject1 ", total.sub1, 
        "Subject2 ", total.sub2, 
        "Subject3 ", total.sub3);

    printf("\nGrand Total = %d\n",total.total);
}