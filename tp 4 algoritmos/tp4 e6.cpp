#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main ()
{
	float p,cd,d ; /* pesos = p , cd= cambio dolar , d= dolares */
printf ("ingrese cantidad de pesos a cambiar \n ");
scanf ("%f",&p );
printf ("ingrese la relacion de cambio a dolar \n");
scanf ("%f",&cd);
d=p*cd;
printf ("la cantidad de pesos son %f y su equivalente en dolares es %f \n", p, d);
system ("pause");
return 0;	

}	
	
