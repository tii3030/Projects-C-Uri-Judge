#include <stdio.h>
	int main(int argc, char const *argv[])
	{
		float N1, N2, N3, N4, M, E;
		scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
		M = (( N1*2 ) + ( N2*3 ) + ( N3*4 ) + ( N4*1 ))/ (2+3+4+1);
		printf("Media: %.1f\n", M);

		if (M>= 7.0)
		{
			printf("Aluno Aprovado\n");
		}
		else if (M>=5.0 && M<7.0)
		{
			printf("Aluno Em Exame\n");
			scanf("%f", &E);
			printf("Media Final = %.1f\n",(E+M)/2);
			if ((E+M)/2 > 5)
			{
				printf("Aluno Aprovado");
			}
			else
            printf("Aluno reprovado");

		}
		else
		{
			printf("Aluno Reprovado\n");
		}
		return 0;
	}
