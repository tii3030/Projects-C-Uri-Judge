#include <stdio.h>
	int main(int argc, char const *argv[])
	{

		int limitador;
		int vetor[100];


		printf("Insira a quantidade de numeros (maximo 100): \n");
		scanf("%d", &limitador);

		if (limitador > 100 || limitador < 0)
		{
			printf("Quantidade de numeros invalida.\n");
			return 0;
		}

		printf("Insira %d numeros inteiros:\n", limitador);
		for (int i = 0; i < limitador; ++i)
		{
			scanf("%d", &vetor[i]);
		}
		printf("Ordem inversa:\n");
		for (int i = limitador-1; i >= 0; --i)
		{
			printf("%d\n", vetor[i]);
		}



	}
