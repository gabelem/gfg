#include <iostream>
#include <vector>

int main()
{
	std::vector<int> arr = {1,1,1,1,1,1,1,1,1,0,0,0};

	int counter = 0;
	for(int i = 0; i < arr.size(); i++)
	{
	if(arr[i] == 0)
	{
		counter++;
	}
	}
	
	std::cout << counter;
}
