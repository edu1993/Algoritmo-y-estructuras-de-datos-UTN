#include <iostream>

int main()
{
	int m[5][6],sum=0;
	printf ("ingrese numeros para completar la matriz de 5*6 \n");
	for (int i=0;i <= 4;i++)
	{
		for (int j=0;j <=5;j++)
		{
			printf ("F:%d||C:%d \n",i,j);
		
			scanf ("%d",&m[i][j]);
		 
		}
	
	}
	system("cls");
 for (int i=0;i <= 4;i++)
	{
		for (int j=0;j <=5;j++)
		{
			printf ("%d\t",m[i][j]);
		    sum+=m[i][j];
		}
	 printf ("\n");
	}
printf ("La suma de todos los numeros de la matriz es %d \n",sum);
system ("pause");

return 0;
}
