#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){
	int* ptr;
	int n, i;

	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Entered number of elements: %d\n", n);

	ptr = (int*)malloc(n * sizeof(int));

	
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {
        
		printf("Memory successfully allocated using malloc.\n");

        printf("Enter the number: ");
		for (i = 0; i < n; ++i) {
			scanf("%d", &ptr[i]);
		}

		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}
	}

    free(ptr);
	return 0;
}


// #include<stdio.h>
// #include<stdlib.h>

// int main(int argc, const char *argv[]){
//     int n;
//     printf("Enter the size: ");
//     scanf("%d",&n);
//     int *fpt = (int *)malloc(n*sizeof(int));
//     for(int i = 0; i < n; i++){

//     }
//     printf("%d", *fpt);
//     free(fpt);
//     return 0;
// }