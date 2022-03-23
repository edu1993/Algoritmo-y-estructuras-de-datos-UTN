#include <iostream>
#include <ctype.h>

int  main ()
{
	char c;
	printf ("ingrese un caracter por pantalla \n");
	scanf("%c",&c);
	if (isalpha(c)==0)
	{
	printf ("no es una letra del alfabeto \n");
	}
	else 
	{
		printf (" es una letra del alfabeto \n");	
	}
 return 0;
}
