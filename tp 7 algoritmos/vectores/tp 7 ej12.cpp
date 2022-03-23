#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

int main()
{

	int dim,n,cont =0;;
	srand (time(NULL));
	printf ("ingrese la cantidad de elementos del vector \n");
	scanf ("%d",&dim);
	dim--;
	int v[dim];
	for(int i=0;i <= dim;i++ )
	{
	 v[i]=rand()%10;

	  } 
    printf ("ingrese n \n");
    scanf ("%d",&n);
	for (int i=0;i <= dim;i++ )
	{
	  //printf ("%d \n",v[i]);	 // para comprobar los valores del areglo por pantalla
      if (n==v[i])
	  {
	  	cont ++;
		 }	
	}
printf ("el numero ingresado aparece %d veces dentro del areglo \n",cont);
system ("pause");
return 0;
}
