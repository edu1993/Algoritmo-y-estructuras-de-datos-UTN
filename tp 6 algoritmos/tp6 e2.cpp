#include <iostream>
#include <ctype.h>

int  main ()
{
	char c;
	printf ("ingrese un caracter por pantalla \n");
	scanf("%c",&c);
	if (isdigit(c)==0)
	{
	printf ("no es un numero \n");
	}
	else 
	{
		printf (" es un numero \n");	
	}
 return 0;
}
