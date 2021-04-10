#include <stdio.h>
	int main(int argc, char const *argv[])
	{
		int matriz[5][5] = {{1,2,3,4,5},
						   {6,7,8,9,10},
						   {11,12,13,14,15},
						   {16,17,18,19,20},
						   {21,22,23,24,25}};

// ou int matriz[5][5] = {1,2,3,4,5,7,8,9,10,11,12,13,1415,16,17,18,19,20,21,22,23,24,25};


		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				printf(" %d", matriz[i][j]);
			}
            printf("\n");
		}

		return 0;
	}
