#include <stdio.h>

int main(int argc, char const *argv[])
{
	int v1[10], i, j, temp;

	for (i = 0; i < 10; ++i) {

		printf("Digite um valor.\n", i+1);
		scanf("%d", &v1[i]);

	}
	for (i = 0; i < 10; ++i) {

		for (j = i + 1; j < 10; ++j)
		{
			if (v1[i] > v1[j])
			{
				temp = v1[i];
				v1[i] = v1[j];
				v1[j] = temp;			}
		}

	}

	printf("\n");
	printf("VETOR EM ORDEM CRESCENTE:\n");

	for (i = 0; i < 10; ++i)
	{
		printf("%d\n", v1[i]);
	}




	return 0;
}
