#include <stdio.h>

int function(int a, int b)
{
	printf("%d\n", (a+b));
}

int main()
{
	int (*ptr_function)(int, int); //ptr function

	ptr_function = &function; //address of function outside the main

	ptr_function(1,1); //arguments inside ptr function


	int c = 10;
	int d = 5;
	ptr_function(c,d); //param a,b inside the ptr function

	return 0;
}
