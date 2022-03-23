#include <iostream>
#include <math.h>

main()
{
	int v1[10],v2[10];
	float v3[11];// el v3 esa aumentado en 1 para que funcione corectamente
	
	for (int i=1;i<=10;i++)
	{
		v1[i]=i;
		v2[i]=pow(i,2);
		v3[i]=sqrt (i);
		
	}
	printf ("n c r \n");
	for(int i=1;i<=10;i++)
	{
		printf ("%d %d %.2f \n",v1[i],v2[i],v3[i]);
	
	}

system ("pause");
return 0;
}
