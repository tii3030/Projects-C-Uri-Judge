#include <stdio.h>
	int main() {

		int SEGUNDOSe, RESTOh, HORAS, MINUTOS, SEGUNDOS;
      scanf("%d", &SEGUNDOSe);
		HORAS = SEGUNDOSe /3600;
		RESTOh = SEGUNDOSe % 3600;

		MINUTOS = RESTOh/60;
		SEGUNDOS = RESTOh % 60;

		printf("%d: %d: %d\n", HORAS, MINUTOS, SEGUNDOS);
		return 0;

	}
