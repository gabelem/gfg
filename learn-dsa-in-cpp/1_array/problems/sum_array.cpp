#include <iostream>
#include <vector>
using namespace std;

class Solution
{
	public:
		int arraySum(vector<int> &arr)
		{
			int sum = 0;
			for(int i = 0; i < arr.size(); i++)
			{
			sum += arr[i];
			}
			printf("%d", sum);
			return sum;
		}
};

int main()
{
	Solution a;
	vector<int> arr = {1,1,1};
	a.arraySum(arr);
	return 0;
}
