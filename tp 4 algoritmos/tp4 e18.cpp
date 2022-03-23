#include <iostream>

using namespace std;

int main ()
{
	int a , mes ;
	a=6; // es la fecha del mes actual
	printf ("ingrese un numero de mes");
	scanf ("%d",&mes);
	if ( mes < a)
	{
		printf ("ya paso");
	}
	if ( mes == a)
	{
		printf ("actual");
	}
	
if ( mes > a)
	{
		printf ("esta por venir");
	}
  
system ("pause");
return 0;


}
