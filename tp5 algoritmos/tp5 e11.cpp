#include <iostream>

using namespace std;

int main ()
{
int i,m,n;

printf ("ingrese 10 numeros \n");
scanf ("%d",&m);
for (i=0; i < 9; i = i + 1) {
	scanf ("%d",&n);
	if (n< m)
	{
		m=n;
	}
}	
  printf ("el menor de los numeros es  %d \n ",m);
system ("pause");
return 0;


}


