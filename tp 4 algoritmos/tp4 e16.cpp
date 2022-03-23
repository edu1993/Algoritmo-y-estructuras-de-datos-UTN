#include <iostream>

using namespace std;

int main ()
{
	int n,c,d,u;
	printf ("ingrese un numero de tres cifras para determinar si es capicua \n");
	scanf ("%d", &n );
	c= n / 100;
	d= n/ 10;
	u= n- (d*10);
	if (c == u)
	{
		printf ("el numero ingresado es capicua \n");
		
	}
	else
	{
		printf ("el numero no es capicua \n");
	}
  
system ("pause");
return 0;


}
