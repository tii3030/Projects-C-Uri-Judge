#include <stdio.h>
	int main(int argc, char const *argv[])
	{
		int a, b, c;
		do
		{
			printf("Digite as notas do aluno:\n\n");
			scanf("%d %d", &a, &b);
			printf("Media = %d\n\n", (a+b)/2);
			printf("Digite 1 para continuar e 2 para sair.\n");
			scanf("%d", &c);

		}		while (c==1);


		return 0;
	}