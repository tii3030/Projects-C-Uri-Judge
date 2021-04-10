#include <stdio.h>
	int main(int argc, char const *argv[])
	{
		int matriz [3][3] = {0};

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				scanf("%d", &matriz[i][j]);
			}
		}

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				printf("\n%d", matriz[i][j]);
			}
		}
		return 0;
	}
