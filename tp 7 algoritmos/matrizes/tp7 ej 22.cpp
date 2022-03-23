#include <iostream>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand (time(NULL));
	int m[7][7],ma,vf[7],vc[7],x;
	for (int x=0;x <=6;x++)
	{
		vf[x]=0;
		vc[x]=0;
	}
	for (int i=0;i <= 6;i++)
	{
		for (int j=0;j <=6;j++)
		{
			m[i][j]=rand()%20;
		}
	
	}
    for (int i=0;i <= 6;i++)//calcula las columnas
	{
		for (int j=0;j <=6;j++)
		{
			vc[i]+=m[i][j];
		}
	
	
	}
   for (int j=0;j <= 6;j++)//calcula las filas
	{
		for (int i=0;i <=6;i++)
		{
			vf[j]+=m[i][j];
		}
	
	
	}
	
	  
	  for (int i=0;i <= 6;i++)//muestra
	{
		for (int j=0;j <=6;j++)
		
		{
			printf ("%d\t",m[i][j]);
			
		
		
		}
	
	printf ("\n");
	}
  printf ("Valores de las Columnas\n");
  for (int c =0;c <= 6;c++)
  {
  	printf ("C:%d suma:%d \n",c+1,vc[c]);
  }
    printf ("Valores de las Filas\n");
	for (int f =0;f <= 6;f++)
  {
  	printf ("F:%d suma:%d \n",f+1,vf[f]);
  }
  
system ("pause");

return 0;
}
