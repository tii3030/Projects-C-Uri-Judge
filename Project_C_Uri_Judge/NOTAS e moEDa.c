#include <stdio.h>
	int main()
{
	float N;
	int n;
	scanf("%f", &N);
	n = N;
	printf("NOTA(S):\n\n");
	printf("\t%d nota(s) de R$ 100\n", n / 100);
		n %= 100;
	printf("\t%d nota(s) de R$ 50\n", n / 50);
		n %= 50;
	printf("\t%d nota(s) de R$ 20\n", n / 20);
		n %= 20;
	printf("\t%d nota(s) de R$ 10\n", n / 10);
		n %= 10;
	printf("\t%d nota(s) de R$ 5\n", n / 5);
		n %= 5;
	printf("\t%d nota(s) de R$ 2\n\n", n / 2);
		n %= 2;
	printf("MOEDA(S):\n\n");
	printf("\t%d moeda(s) de R$ 1\n", n / 1);
		n = (N-n)*100;
		n %= 100;
	printf("\t%d moeda(s) de R$ 0,50\n", n / 50);
      n %= 50;
   printf("\t%d moeda(s) de R$ 0,25\n", n / 25);
      n %= 25;
   printf("\t%d moeda(s) de R$ 0,10\n", n / 10);
      n %= 10;
   printf("\t%d moeda(s) de R$ 0,05\n", n / 5);
      n %= 5;
   printf("\t%d moeda(s) de R$ 0,01\n", n);

	return 0;


}

