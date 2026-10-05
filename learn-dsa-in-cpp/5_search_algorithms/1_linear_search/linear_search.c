#include <stdio.h>

void search(int *myarr, int key, int size)
{
	for(int i = 0; i < size; i++)
	{
	if(myarr[i] == key)
	{
		printf("%d exist in the array[%d]\n",key, i);
	}
	}
}

int main()
{
	int myarr[] = {1,2,3,4,5};
	search(myarr, 5, (sizeof(myarr)/sizeof(myarr[0])) );

	return 0;
}
