#include <iostream>
#include <ctype.h>

int  main ()
{
	char c;
	printf ("ingrese un caracter por pantalla \n");
	scanf("%c",&c);
	if (isgraph(c)==0)
	{
	printf ("no es imprimible \n");
	}
	else 
	{
		printf (" es imprimible \n");	
	}
 return 0;
}
