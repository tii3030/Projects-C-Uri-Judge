#include <stdio.h>
#include <math.h>
	int main()
	{
		double a, b, c, d, x1, x2;

		scanf("%lf %lf %lf", &a, &b, &c);
		d = (b*b) - 4*a*c;
		x1 = (-b + sqrt(d)) / (2*a);
		x2 = (-b - sqrt(d)) / (2*a);

		if (d>0 && 2*a != 0)
		{
			printf("Raiz 1 = %lf\n", x1);
			printf("Raiz 2 = %lf\n", x2);
		}

		else

			printf("Impossivel calcular");
		return 0;
	}

