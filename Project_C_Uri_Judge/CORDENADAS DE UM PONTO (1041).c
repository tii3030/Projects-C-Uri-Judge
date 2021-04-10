 #include <stdio.h>
	int main(int argc, char const *argv[])
	{
		float x, y;
		scanf("%f %f", &x, &y);
		if (x>0 && y>0)
		{
			printf("Q1\n");
		}
		else if (x>0 && y<0)
		{
			printf("Q4\n");
		}
		else if (x<0 && y>0)
		{
			printf("Q2\n");
		}
		else if (x<0 && y<0)
		{
			printf("Q3\n");
		}
		else if (x=0 && y<0 || y>0)
		{
			printf("No eixo x\n");
		}
		else if (y=0 && x>0 || x<0)
		{
			printf("Em cima do eixo y\n");
		}
		else
		{
		   printf("Origem\n");
		}
		return 0;
	}
