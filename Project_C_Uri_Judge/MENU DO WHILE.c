#include <stdio.h>
	int main(int argc, char const *argv[])
	{
		int i;
		do {
			printf("\tEscolha uma fruta:\n\n");
			printf("\t (1) Laranja\n");
			printf("\t (2) Acerola\n");
			printf("\t (3) Tomate\n\n");
			scanf("\t%d", &i);
		} while ((i<1) || (i>3));
			switch (i)
			{
				case 1:
					printf("\tEu escolhi Laranja\n");
						break;
				case 2:
					printf("\tEu escolhi Acerola\n");
						break;
				case 3:
					printf("\tEu escolhi Tomate\n");
						break;
			}
		return (0);
	}