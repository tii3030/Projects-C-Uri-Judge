#include <stdio.h>
#include <math.h>
	int main () {

		float x, x2, y, y2;
		float distancia;

		printf("DIGITE O PRIMEIRO PONTO\n");
		scanf("%f %f", &x, &y);
		printf("DIGITE O SEGUNDO PONTO\n");
		scanf("%f %f", &x2, &y2);
		distancia = sqrt (pow(x2-x, 2) + pow(y2-y, 2));
		printf("%.4f\n", distancia);

 return 0;
}