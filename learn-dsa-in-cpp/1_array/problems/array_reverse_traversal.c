#include <stdio.h>

int main()
{
	
	int arr[5] = {54, 43, 2, 1, 5};
	int n = 5;

	for(int i = n-1; i != -1; i--)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
