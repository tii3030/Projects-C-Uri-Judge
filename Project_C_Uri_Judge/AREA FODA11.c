#include <stdio.h>
	int main() {

		double A, B, C, Y, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO, PI;

		scanf("%lf %lf %lf", &A, &B, &C);

			TRIANGULO = A*C/2;

			CIRCULO = 3.14159*C*C;

			Y = A+B;

			TRAPEZIO = Y*C/2;

			QUADRADO = B*B;

			RETANGULO = A*B;

		printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",
			TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);

return 0;

}
