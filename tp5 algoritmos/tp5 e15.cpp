#include <iostream>

using namespace std;

int main ()
{
int n, cont=0;
printf ("ingrese numeros pulsando enter para finalizar ingrese 0 \n");
do
{
	scanf ("%d",&n);
	if (n==5)
	{
		cont++;
	}
	
	
	}	while (n!=0);
	
	printf ("la cantidad de 5 ingresados fue %d \n",cont);
  
system ("pause");
return 0;


}

