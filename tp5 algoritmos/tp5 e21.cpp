#include <iostream>

using namespace std;

int main ()
{
int n,acum=0,cont=0;
printf ("ingrese numeros pulsando enter para finalizar ingrese 0 \n");

do
{
	scanf ("%d",&n);
	 acum=acum + n;
	 if (n != 0)
	 {
	 
	 cont++;
	 
	 }
	}	while (n!=0);
	acum=acum/cont;
	printf ("el promedio de los numeros ingresados es  %d \n",acum);
  
system ("pause");
return 0;


}

