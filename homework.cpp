#include <iostream>

int main()
{
	int const n = 8;
	int const m = 7;
	int arr[n] = {1, 3, 4, 5, 5, 8, 10, 15};
	int arr2[m] = {2, 3, 4, 6, 11, 13, 28};
	int const l = m + n;
	int res[l];
	int index1 = 0;
	int index2 = 0;
	for(int i = 0; i < l; ++i)
	{
		if(arr[index1] <= arr2[index2])
		{
			res[i] = arr[index1];
			++index1;
		}
		else
		{
			res[i] = arr2[index2];
			++index2;
		}
	}
	for(int i = 0; i < l; ++i)
	{
		std::cout << res[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
