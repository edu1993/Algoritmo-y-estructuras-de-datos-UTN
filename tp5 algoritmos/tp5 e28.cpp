#include <iostream>

int main()
{
	float th,acum;
	for (int dia=1;dia <= 30;dia++)
	{
	acum =0;
	for (int hs=1;hs <=24;hs++)
	{
		printf ("ingrese la temperatura hs: %d \n",hs);
		scanf ("%f",&th);
		acum = acum +th;
	}
	printf ("la temperatura promedio del dia %d es : %.2f \n",dia,acum/24);
	
	}
	system ("pause ");
	return 0;
}
