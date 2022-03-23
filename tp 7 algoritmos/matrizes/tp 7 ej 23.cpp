#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int m[20][20],v[20],col,ma;
    srand(time(NULL));
	
	
	
	//rellena la matriz de valores entre 10 y 30
	for (int i=0;i <=19;i++)
	{
		for (int j=0;j <=19; j++)
		{
			m[i][j]=rand()%(30-10+1)+10;
		}
	 v[i]=0;//coloca cero en todas las posiciones del vector
	}	
   //lo recore sumando columnas
  	for (int j=0;j <=19;j++)
	{
		for (int i=0;i <=19; i++)
		{
			v[j]+=m[i][j];
 		}
  
	}	
  //muestra la matriz	
	  	for (int i=0;i <=19;i++)
	{
		for (int j=0;j <=19; j++)
		{
			printf ("%d ",m[i][j]);
		
			
			
			
		}
      printf ("\n");	
	}	
	  printf ("Valores de las Columnas\n");
  for (int c =0;c <= 6;c++)
  {
  	printf ("C:%d suma:%d \n",c+1,v[c]);
  	if (c==0)
  	{
  	   col=c+1;//c+1 porque es mas natural contar del 1 que desde el cero	
		ma=v[c];	  
	  }
	 else 
	 {
	 	if (ma <= v[c])
	 	{
	 		ma=v[c];
	 		col=c+1;
		 }
	  } 
  }
   printf ("la mayor suma pertence a la columna:%d y es:%d \n",col,ma);
    system ("pause");
    return 0;
}
