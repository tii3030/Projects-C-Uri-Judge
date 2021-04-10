#include <stdio.h>
	int main(int argc, char const *argv[])
	{
		int notas[5] = {0};
		int  media = 0;
		int total = 0;

		printf("Digite as 5 notas do aluno\n");

		for (int i = 0; i < 5; i++)
      {
         scanf("%d", &notas[i]);
      }


		for (int i = 0; i < 5; ++i)
      {
         printf("%d\n", notas[i]);
      }


		return 0;
	}
