#include <stdio.h>
#include <stdlib.h>

	int main(int argc, char const *argv[])
	{
		int vetor1[3];
		int vetor2[3];

		for (int i = 0; i < 3; ++i)
		{
			vetor1[i] = 23;
		}

		for (int i = 0; i < 3; ++i)
		{
			printf("%d\n", vetor1[i]);
		}
		return 0;
	}
