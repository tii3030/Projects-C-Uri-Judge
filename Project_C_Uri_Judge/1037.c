#include <stdio.h>
	int main(int argc, char const *argv[])
	{
		float a;
		printf("Digite um numero:\n\n");
		scanf("%f", &a);

		if (0<=a && a<=25)
		{
			printf("O numero esta entre 0 e 25\n");
		}
		else if (25<a && a<=50)
		{
			printf("O numero esta entre 25 e 50");
		}
		else if (50<a && a<=75)
		{
			printf("O numero esta entre 50 e 75");
		}
		else if (75<a && a <=100)
		{
			printf("O numero esta entre 75 e 100");
		}
		else
         	printf("O numero esta fora do intervalo");
		return 0;
	}
