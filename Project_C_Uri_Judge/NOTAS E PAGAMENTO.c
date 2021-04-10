#include <stdio.h>
	int main()
	{
		int VALOR, A, DINHEIRO,DADO, TROCO1, TROCO2, TROCO3, TROCO4, TROCO5, CEM, CINQ, VINTE, DEZ, CINCO, DOIS, UM;
		printf("VALOR DA COMPRA:\n");
		scanf("%d", &VALOR);
		printf("VALOR PAGO:\n");
		scanf("%d", &DADO);
		
		DINHEIRO = DADO - VALOR;

		A = DINHEIRO / 100;
		TROCO1 = DINHEIRO % 100;

		CINQ = TROCO1 / 50;
		TROCO2 = TROCO1 % 50;

		VINTE = TROCO2 / 20;
		TROCO3 = TROCO2 % 20;

		DEZ = TROCO3 / 10;
		TROCO4 = TROCO3 % 10;

		CINCO = TROCO4 / 5;
		TROCO5= TROCO4 % 5;

		DOIS = TROCO5 / 2;
		UM = TROCO5 % 2;


		printf("%d NOTA (S) DE R$ 100,00\n", A);
		printf("%d NOTA (S) DE R$ 50,00\n", CINQ);
		printf("%d NOTA (S) DE R$ 20,00\n", VINTE);
		printf("%d NOTA (S) DE R$ 10,00\n", DEZ);
		printf("%d NOTA (S) DE R$ 5,00\n", CINCO);
		printf("%d NOTA (S) DE R$ 2,00\n", DOIS);
		printf("%d NOTA (S) DE R$ 1,00\n", UM);

		return 0;
	}
