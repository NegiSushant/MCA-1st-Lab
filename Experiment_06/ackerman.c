/*
Ques------------>>>>>>>>
                    Ackermann(0,n)  // to compute ackermann function 

*/
#include <stdio.h>
int ackermann(int, int);

int main(){
	int A, m, n;
    printf("Enter two number: ");
    scanf("%d%d", &m,&n);
	A = ackermann(m, n);
	printf("%d", A);
	return 0;
}

int ackermann(int m, int n){
	if (m == 0){
		return n+1;
	}
	else if((m > 0) && (n == 0)){
		return ackermann(m-1, 1);
	}
	else if((m > 0) && (n > 0)){
		return ackermann(m-1, ackermann(m, n-1));
	}
}

