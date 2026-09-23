#include <iostream>
#include <vector>

int main()
{
	std::vector<int> arr = {1, 2, 3, 4};
	int x = 3;
	int index = 0;
	//
	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] == x)
		{
		index = i;
		break;
		}
	}
	std::cout << index;

	return 0;
}
