#include <iostream>

main()
{
	int v[10];
	printf ("ingrese 10 numeros precionando enter despues de cada numero \n");
	for (int i=1;i <= 10;i++)
	{
		scanf("%d",&v[i]);
	}
 	printf ("vector mostrado decendente y acedentemente \n");
 	printf ("********************************************\n");
	for (int i =1, j=10; i <=10;i++,j--)
	{
		printf (" |%d|	 |%d| \n",v[i],v[j]);
	}
	system ("pause");
	return 0;
	
}
