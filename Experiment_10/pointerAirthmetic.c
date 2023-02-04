/*

Qus_01---->>>>>>
                Implement pointer arithmatic

*/
#include <stdio.h>
// 
//pointers are incremented and decremented by the size of the data type they point to
int main(){
    printf("pointer increment and decrement!\n");
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
	
	int *p = &a;
	printf("p = %u\n", p);
    p++;
	printf("p++ = %u\n", p);
	p--;
	printf("p-- = %u\n", p); 

    printf("Addition of Pointer!\n");
    // Integer variable
    int N;
    printf("\n enter the number: \n");
    scanf("%d", &N); 
    // Pointer to an integer
    int *ptr1, *ptr2;
 
    // Pointer stores the address of N
    ptr1 = &N;
    ptr2 = &N;
 
    printf("Pointer ptr2 before Addition: ");
    printf("%p \n", ptr2);
 
    // Addition of 3 to ptr2
    ptr2 = ptr2 + 3;
    printf("Pointer ptr2 after Addition: ");
    printf("%p \n", ptr2);


    // Integer variable
    int x = 4;
 
    // Pointer to an integer
    int *ptr_1, *ptr_2;
 
    // Pointer stores the address of N
    ptr_1 = &x;
    ptr_2 = &x;
 
    printf("Pointer ptr2 before Subtraction: ");
    printf("%p \n", ptr_2);
 
    // Subtraction of 3 to ptr2
    ptr_2 = ptr_2 - 3;
    printf("Pointer ptr2 after Subtraction: ");
    printf("%p \n", ptr_2);

	return 0;
}
