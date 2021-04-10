#include <stdio.h>
	int main(int argc, char const *argv[])
	{
		char palavra1[] = {'p','a','o','\0'};
		char palavra2[] = {'m','o','r','t','a','d','e','l','a','\0'};
		char palavra3[14];


		for (int i = 0; i < 4; ++i)
		{
			palavra1[i] = palavra3[i];
		}

		printf("%c", palavra3[2]);

		return 0;
	}
