#include <stdio.h>
	int main()
	{
		int DINHEIRO,RESTO100, CEM, RESTO50, CINQUENTA, RESTO20, VINTE, RESTO10, DEZ, RESTO5, CINCO, RESTO2, DOIS, UM1;

		printf("DIGITE O VALOR\n");
		scanf("%d", &DINHEIRO);

		CEM = DINHEIRO / 100;
		RESTO100 = DINHEIRO % 100;
		CINQUENTA = RESTO100 / 50;
		RESTO50 = RESTO100 % 50;
		VINTE = RESTO50 / 20;
		RESTO20 = RESTO50 % 20;
		DEZ =  RESTO20 / 10;
		RESTO10 = RESTO20 % 10;
		CINCO = RESTO10 / 5;
		RESTO5 = RESTO10 % 5;
		DOIS = RESTO5 / 2;
		RESTO2 = RESTO5 % 2;

		printf("NOTAS:\n");
		printf("%d NOTA (S) DE R$ 100\n", CEM);
		printf("%d NOTA (S) DE R$ 50\n", CINQUENTA);
		printf("%d NOTA (S) DE R$ 20\n", VINTE);
		printf("%d NOTA (S) DE R$ 10\n", DEZ);
		printf("%d NOTA (S) DE R$ 5\n", CINCO);
		printf("%d NOTA (S) DE R$ 2\n", DOIS);
		printf("MOEDAS.\n");
		printf("%d MOEDA (S) DE R$ 1\n", RESTO2);

		return 0;
	}
