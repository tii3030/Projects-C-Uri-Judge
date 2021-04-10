#include <stdio.h>
	int main () {

		char name;
		double salario, vendas, total;

			scanf("%s %lf %lf", &name, &salario, &vendas);

			total = salario + (15*vendas)/100;

			printf("TOTAL = R$ %.2lf\n", total);

	return 0;

}
