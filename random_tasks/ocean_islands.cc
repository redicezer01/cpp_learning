#include <iostream>
#include <vector>

int isle_cnt(std::vector<std::vector<int>> ocean)
{
	int i, j, cnt = 0;

	for (i = 0; i < ocean.size(); ++i) {
		for (j = 0; j < ocean[i].size(); ++j) {
			if (ocean[i][j] == 1) {
				++cnt;
				if (i > 0 && ocean[i-1][j] == 1)
					--cnt;
				if (j > 0 && ocean[i][j-1] == 1)
					--cnt;
			}
		}
	}
	
	return cnt;
}
int main()
{
	std::vector<std::vector<int>> ocean =
	{
		{0, 0, 0, 1, 0, 0, 0, 1, 0},
		{0, 0, 0, 0, 0, 1, 1, 0, 0},
		{0, 0, 1, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 1, 0, 0, 1, 1, 0},
		{0, 0, 1, 1, 0, 0, 0, 1, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 1, 1, 0, 0, 0, 0, 0, 0},
	};


	std::vector<std::vector<int>> ocean1 =
	{
		{1, 1, 1},
		{0, 1, 0},
		{1, 1, 1},
	};
	
	std::cout << isle_cnt(ocean1);
	
	
	return (0);
}
