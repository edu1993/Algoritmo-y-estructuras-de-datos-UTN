#include <iostream>
#include <ctype.h>

int  main ()
{
	char c;
	printf ("ingrese un caracter por pantalla \n");
	scanf("%c",&c);
	if (islower(c)==0)
	{
	printf ("es mayuscula \n");
	}
	else 
	{
		printf (" es minuscula \n");	
	}
 return 0;
}
