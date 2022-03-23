#include <iostream>

using namespace std;

int main ()
{
int n, acum=0;
printf ("ingrese numeros pulsando enter para finalizar ingrese 0 \n");
do
{
	scanf ("%d",&n);
	acum=acum+n;
	
	}	while (n!=0);
	
	printf ("la suma de los numeros ingresados es %d \n",acum);
  
system ("pause");
return 0;


}

