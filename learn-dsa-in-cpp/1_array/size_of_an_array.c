#include <stdio.h>

int main()
{
	int arr[2];

	printf("%ld\n", sizeof(arr)); // 1 int element = 4 bytes

	printf("%ld\n", sizeof(arr[0])); // size of 1 unique int element

	// full array size divided by one integer element.
	int number_of_elements = sizeof(arr)/sizeof(arr[0]);

	printf("%d\n", number_of_elements);
	return 0;
}
