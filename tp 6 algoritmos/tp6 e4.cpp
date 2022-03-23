#include <iostream>
#include <ctype.h>

int  main ()
{
	char c;
	printf ("ingrese un caracter por pantalla \n");
	scanf("%c",&c);
	if (ispunct(c)==0)
	{
	printf ("no es un simbolo de puntuacion \n");
	}
	else 
	{
		printf (" es un simbolo de puntuacion \n");	
	}
 return 0;
}
