#include <stdio.h>

//pointer that stores address of another pointers instead of directly point to a data value.

int main()
{
	int var = 10;

	int *ptr1 = &var;

	int **ptr2 = &ptr1;

	printf("var: %d\n*ptr1: %d\n**ptr2: %d\n", var, *ptr1, **ptr2);

	return 0;
}
