#include <iostream>
#include <math.h>

main()
{
	float  v1[6],prom,mayor;
	int pm;
 
	printf ("ingrese 6 numeros precionando enter \n");
	for (int i=1;i<=6;i++)
	{
		scanf ("%f",&v1[i]);
		prom+= v1[i];
		
	}
	prom=prom /6;
	printf ("el promedio es: %.2f \n",prom);
	
	for(int i=1;i<=6;i++)
	{
		printf ("posicion %d valor %.2f \n",i,v1[i]);
	    if (v1[i]>=prom)
	    {
	    	printf ("es MAYOR AL PROMEDIO \n");
		}
	}


system ("pause");
return 0;
}
