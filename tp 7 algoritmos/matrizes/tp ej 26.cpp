#include <iostream>

int main()
{
	char m[5][4],v[10]={'a','e','i','o','u','A','E','I','O','U'};
	int cont=0;
	printf ("ingrese letras precionando enter \n");
	for(int i=0;i <=4;i++)
	{
		for (int j=0;j <=3;j++)
		{
			scanf("%c",&m[i][j]);
			fflush(stdin);
		}
	}
	system("cls");
for(int i=0;i <=4;i++)
	{
		for (int j=0;j <=3;j++)
		{
			for (int b=0;b <=9;b++)
			{
				if(m[i][j]==v[b])
				{
					cont++;
				}
			}
			
		}
	 
	}		
	for(int i=0;i <=4;i++)
	{
		for (int j=0;j <=3;j++)
		{
		printf ("%c ",m[i][j]);
		}
	printf("\n");
	}
printf ("la cantidad de vocales es %d\n",cont);
system ("pause");
return 0;
}
