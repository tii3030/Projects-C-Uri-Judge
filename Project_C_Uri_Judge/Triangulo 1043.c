#include <stdio.h>
	int main () {

		float a, b, c;

		scanf("%f %f %f", &a, &b, &c);

		if (a<b+c && b<a+c && c<a+b)
		{
			printf("Perimetro = %.2f\n", a+b+c);
		}

		else
			printf("Area = %.2f\n", ((a+b)/2)*c );

return 0;


	}
