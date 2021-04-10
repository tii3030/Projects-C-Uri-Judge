#include <stdio.h>
	int main(int argc, char const *argv[])
	{
		const int Bimestres = 4;
		const int Alunos = 4;

		float Notas_alunos[Alunos][Bimestres];
		float Media_de_cada_aluno[4] = {0};
		float media = 0;

		for (int i = 0; i < Alunos; i++)
		{
			for (int j = 0; j < Bimestres; j++)
			{
				printf("Insira a nota %d do aluno %d:\n", j+1, i+1 );
				scanf("%f", &Notas_alunos[i][j]);
				media += Notas_alunos[i][j];

			}
			Media_de_cada_aluno[i] = media / 4;
			printf("%.2lf\n\n", Media_de_cada_aluno[i]);
			media = 0;
		}




		return 0;
	}
