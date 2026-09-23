#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> arr = {1, 2, 3, 4};
	int x = 3;

	int index = -1;

	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] == x)
		{
			index = i;
			break;
		}
	}
	cout << index;
	return index;
}
