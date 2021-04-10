#include <stdio.h>
#include <stdlib.h>

	int main(int argc, char const *argv[])
	{
		int v[5];

		for (int i = 0; i < 5; ++i)
		{
			scanf("%d", &v[i]);
		}

      printf("A ordem reversa:");

		for (int i = 4; i >= 0; --i)
		{
			printf("%d ", v[i]);
		}
		return 0;
	}
