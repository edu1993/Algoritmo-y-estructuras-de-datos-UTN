#include <iostream>
#include <ctype.h>

int  main ()
{
	char c;
	int n;

printf ("ingrese un caracter por pantalla \n");



	scanf("%c",&c);
    printf ("el caracter ingresado es %c \n", c);
    n=isalpha(c);
    printf ("isalpha = %d \n", n);
	n=isdigit(c);
    printf ("isdigit = %d \n", n);
	n=isgraph(c);
    printf ("isgraph = %d \n", n);
	n=ispunct(c);
    printf ("ispunct = %d \n", n);
	n=islower(c);
    printf ("islower = %d \n", n);
	n=isupper(c);
    printf ("isupper = %d \n", n);
	
 
 
	
	return 0;
}
