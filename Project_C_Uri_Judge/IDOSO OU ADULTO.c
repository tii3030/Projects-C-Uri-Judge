#include <stdio.h>
	int main() {

		int numero;

		printf("INFORMA SUA IDADE\n");
      scanf("%d", &numero);

		if (numero < 12)

			printf("CRIANCA\n");

		if (numero >= 12  && numero <= 18)

			printf("ADOLESCENTE\n");

		if (numero > 18 && numero <= 50)

			printf("ADULTO");

      if (numero > 50)

         printf("IDOSO");




		}
