#include <stdio.h>
	int main(int argc, char const *argv[])
	{
		int a, b;
		printf("\t(1) Cachorro quente - R$ 4.00\n");
		printf("\t(2) X-Salada     -    R$ 4.50\n");
		printf("\t(3) X-Bacon      -    R$ 5.00\n");
		printf("\t(4) Torrada Simples - R$ 2.00\n");
		printf("\t(5) Refrigerante  -   R$ 1.50\n\n");
		scanf("%d %d", &a, &b);
		switch (a)
		{

			case 1:
				printf("\t%d Cachorro quente(s) = R$ %.2f\n", b,  (b*4.00));
					break;
			case 2:
				printf("\t%d X-Salada(s) = R$ %.2f\n", b, (b*4.50));
					break;
			case 3:
				printf("\t%d X-Bacon(s) = R$ %.2f\n", b, (b*5.00));
					break;
			case 4:
				printf("\t%d Torrada Simples(s) = R$ %.2f\n", b, (b*2.00));
					break;
			case 5:
				printf("\t%d Refrigerante(s) = R$ %.2f\n", b, (b*1.50));
					break;
		}
		return 0;
	}
