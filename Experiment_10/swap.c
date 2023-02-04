#include<stdio.h>

void swap(int *, int *);
void main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);

    printf("\nValue of a and b before swaping:\nA=%d, B=%d",a, b);
    swap(&a, &b);
    printf("\nValue of a and b after swaping:\n A=%d, B=%d", a, b);
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}