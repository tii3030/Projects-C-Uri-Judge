#include <stdio.h>
	int main (){

		int a, b;
		printf("DIGITE DOIS NUMERO INTEIROS\n");
		scanf("%d %d", &a, &b);
		// esses operadores sempre retornarão 0(falso) ou 1(verdadeiro) 
		printf("%d == %d RETORNA %d\n", a, b, a==b);
		printf("%d <= %d RETORNA %d\n", a, b, a<=b);
		printf("%d >= %d RETORNA %d\n", a, b, a>=b);
		printf("%d < %d RETORNA %d\n", a, b, a<b);
		printf("%d > %d RETORNA %d\n", a, b, a>b);

		return 0;


	}
