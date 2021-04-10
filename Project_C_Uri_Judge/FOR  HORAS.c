#include <stdio.h>
	int main(int argc, char const *argv[])
	{
		int inicioDoPeriodo, fimDoPeriodo, totalDeDias;
		float totalDeHoras, horas;

			printf("Digite o Inicio do Periodo\n");
			scanf("%d", &inicioDoPeriodo);
			printf("Digite o Fim do Periodo\n");
			scanf("%d", &fimDoPeriodo);

		for (; inicioDoPeriodo < fimDoPeriodo; ++inicioDoPeriodo)
		{
			printf("Digite a quantidade de horas do dia\n");
			scanf("%f", &horas);
			totalDeHoras +=horas;


		}

		printf("Quantidade de horas: %f\n",totalDeHoras );
		return 0;
	}
