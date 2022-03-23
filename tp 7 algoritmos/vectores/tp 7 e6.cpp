#include <iostream>
#include <stdlib.h>
#include <time.h>
main()
{
    srand (time (NULL));
	int v[20],dc=0;

	for (int i=1;i <= 10;i++)
	{
		v[i]=rand ()%10;
	}
   	printf ("valores del vector : \n");
	for (int i =1; i <=10;i++)
	{
		if(v[i]==5)
		{
			dc++;
		}
		printf ("%d \t",v[i]);
	}
	if (dc !=0)
	{
		printf ("\n se detecto precencia del numero 5 la cantidad %d \n",dc );
	}
	else 
	{
		printf ("\n no hay precencia del numero 5 en el vector \n ");
	}
	system ("pause");
	return 0;
	
}
