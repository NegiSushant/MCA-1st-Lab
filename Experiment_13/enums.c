/*
Ques--->>>>> 2. Write a program to demonstrate enum
*/

#include<stdio.h>

enum year{Jan, Feb, Mar, Apr, May, Jun, Jul,
		Aug, Sep, Oct, Nov, Dec};

int main(){
    for (int i = Jan; i <= Dec; i++)	
	printf("%d ", i);
	
return 0;
}
