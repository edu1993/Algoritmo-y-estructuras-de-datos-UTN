#include <stdio.h> 
#include <iostream>
#include <ctype.h>


main ()
{
char c;
printf ("ingrese un caracter \n");
c=getchar();
if (islower(c)!=0)
{
	c=toupper(c);
}
else 
{
	c=tolower (c);
}

printf ("cambio de mayuscula a minuscula o viceversa : \t %c \n",c);
system ("pause");
return 0;
}

