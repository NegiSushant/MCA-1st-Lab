#include<stdio.h>
#include<stdlib.h>

int main(int argc, const char *argv[]){
    int *ptr, i, n;

    printf("ENter the size: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if(ptr == NULL){
        printf("Memory is not succesfully allocated!");
        exit(0);
    }
    else{
        printf("\nMemmory is allocated succesfully!");

        printf("\nEnter the elements: ");
        for(i = 0; i < n; i++){
            scanf("%d", &ptr[i]);
        }

        printf("Entered elements are: ");
        for(i = 0; i < n; i++){
            printf("%d, ", ptr[i]);
        }

    }
    free(ptr);
    return 0;
}