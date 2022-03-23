#include <iostream>

using namespace std;

int main()
{
	int n;
	printf ("ingrese un numero para obtener su valor absoluto \n");
	scanf ("%d",&n);
	if (n<0)
	{
		n=n*-1;
			
	}
printf ("el valor absoluto es %d",n);
system ("pause ");
return 0;


}


