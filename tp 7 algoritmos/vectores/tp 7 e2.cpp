#include <iostream>
#include <math.h>

main()
{
	float  v1[15];
 
	printf ("ingrese 15 numeros precionando enter \n");
	for (int i=15;i>=1;i--)
	{
		scanf ("%f",&v1[i]);
		
		
	}
	
	for(int i=1;i<=15;i++)
	{
		printf ("posicion %d  valor %.2f \n",i,v1[i]);
	
	}

system ("pause");
return 0;
}
