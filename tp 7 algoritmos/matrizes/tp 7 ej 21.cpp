#include <iostream>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand (time(NULL));
	int m[10][7],ma,v[2];;
	
	for (int i=0;i <= 9;i++)
	{
		for (int j=0;j <=6;j++)
		{
			m[i][j]=rand()%(20-(-20)+1)+(-20);
		}
	
	}

 for (int i=0;i <= 4;i++)
	{
		for (int j=0;j <=5;j++)
		{
			printf ("%d\t",m[i][j]);
		   if(j==0&&i==0)
		   {
		   	ma=	m[i][j];
		   	v[0]=i;
		   	v[1]=j;
		   	
		   }
		   if (ma <=m[i][j] )
		   {
		   	ma=m[i][j];
		    v[0]=i;
		   	v[1]=j;
		   	
		   }
		}
	 printf ("\n");
	}
printf ("El mayor todos los numeros de la matriz es %d \nF=%d||C=%d \n",ma,v[0]+1,v[1]+1);
system ("pause");

return 0;
}
