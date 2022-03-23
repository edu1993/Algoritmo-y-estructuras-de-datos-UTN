#include <iostream>

using namespace std;

int main ()
{
int n, m;
printf ("ingrese numeros pulsando enter para finalizar ingrese 0 \n");
scanf("%d",&m);
do
{
	scanf ("%d",&n);
	if(n>m && n != 0)
	{
	
	m=n;
	
	}
	}	while (n!=0);
	
	printf ("el mayor de los numeros es %d \n",m);
  
system ("pause");
return 0;


}

