 #include <stdio.h>
	int main() {
		int DIASi, RESTOa, ANO, MESES, DIAS;
		printf("DIGITE SUA IDADE EM DIAS\n");
		scanf("%d", &DIASi);

		ANO = DIASi / 365;
		RESTOa = DIASi % 365;

		MESES = RESTOa / 30;
		DIAS = RESTOa % 30;

		printf("%d ano (s)\n%d mes (es)\n%d dia(s)\n", ANO, MESES,  DIAS);
		return 0;

	}
