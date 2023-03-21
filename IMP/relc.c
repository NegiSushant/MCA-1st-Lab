#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){
    int* ptr;
	int n, i;

	printf("Enter the size: ");
    scanf("%d", &n);

	printf("Enter number of elements: %d\n", n);

	ptr = (int*)malloc(n*sizeof(int));


	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		printf("Memory successfully allocated using calloc.\n");

        printf("Enter the element: ");
		for (i = 0; i < n; i++) {
			scanf("%d", &ptr[i]);
		}

		printf("The elements of the array are: ");
		for (i = 0; i < n; i++) {
			printf("%d, ", ptr[i]);
		}

        printf("Enter the new size: ");
        scanf("%d", &n);
		printf("\n\nEnter the new size of the array: %d\n", n);

		ptr = realloc(ptr, n * sizeof(int));

		printf("Memory successfully re-allocated using realloc.\n");

		for (i = 5; i < n; i++) {
			scanf("%d", &ptr[i]);
		}

		printf("The elements of the array are: ");
		for (i = 0; i < n; i++) {
			printf("%d, ", ptr[i]);
		}

		free(ptr);
	}

	return 0;
}
