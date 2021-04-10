#include <stdio.h>
#include <locale.h>

	int main(){

		int a, b, c, d;

		scanf("%d %d %d %d", &a, &b, &c, &d);
		setlocale(LC_ALL,"");
		printf("DIFERENCA = %d\n", (a*b - c*d));

	return 0;

}