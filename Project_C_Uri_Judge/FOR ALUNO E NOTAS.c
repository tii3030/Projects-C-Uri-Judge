#include <stdio.h>
	int main(int argc, char const *argv[])
	{
		char aluno [] = {0};
		float media, total, notas [4];



		for (int i = 0; i < 2; ++i)
		{
			printf("Digite o nome do aluno\n");
			scanf("%s", &aluno);

		for (int j = 0; j < 4; ++j)
		{
			printf("Digite a nota %d do %s\n", j+1, aluno);
			scanf("%f", &notas[j]);
			total += notas[j];

		}

			media = total/4;
			printf("a media do aluno é: %.2lf\n", media);
		}

	return 0;
	}
