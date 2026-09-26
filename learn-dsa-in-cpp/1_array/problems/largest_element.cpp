#include <iostream>
#include <vector>
using namespace std;
class Solution
{
	public:
		int largest(vector<int> &arr)
		{
		int temp = 0;
		for(int i = 0; i < arr.size(); i++)
		 {
			if(arr[i] > temp)
			{
			temp = arr[i];
			}
		 }
		cout << temp;
		return temp;
		}
};

int main()
{
	Solution a;
	vector<int> vec = {1,2,3};
	a.largest(vec);

	return 0;
}
