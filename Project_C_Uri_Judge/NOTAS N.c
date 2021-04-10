#include <stdio.h>
	int main()
{
	float n;
	scanf("%.2lf", &n);

	printf("%d nota(s) de R$ 100\n", n / 100);
		n %= 100;
	printf("%d nota(s) de R$ 50\n", n / 50);
		n %= 50;
	printf("%d nota(s) de R$ 20\n", n / 20);
		n %= 20;
	printf("%d nota(s) de R$ 10\n", n / 10);
		n %= 10;
	printf("%d nota(s) de R$ 5\n", n / 5);
		n %= 5;
	printf("%d nota(s) de R$ 2\n", n / 2);
		n %= 2;
	printf("%d moeda(s) de R$ 1\n", n / 1);



	return 0;


}