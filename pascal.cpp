#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int **tr = new int*[n];
	for(int i = 0; i < n; ++i)
	{
		tr[i] = new int[n];
	}
	for(int i = 1; i < n; ++i)
	{
		tr[0][i] = 0;
	}
	for(int i = 0; i < n; ++i)
	{
		tr[i][0] = 1;
	}
	for(int i = 1; i < n; ++i)
	{
		for(int j = 1; j < n; ++j)
		{
			tr[i][j] = tr[i - 1][j - 1] + tr[i - 1][j];
		}
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			if(tr[i][j] != 0)
			{
				std::cout << tr[i][j] << " ";
			}
			else
			{
				break;
			}
		}
		std::cout << std::endl;
	}

	return 0;
}
