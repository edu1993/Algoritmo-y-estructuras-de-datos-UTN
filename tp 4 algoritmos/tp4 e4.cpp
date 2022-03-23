#include <iostream>

using namespace std;

int main()
{
	int  n1,n2,r,s;
	
	printf ("ingrese un numero, luego precione enter e ingrese otro \n ");
	scanf ("%d",&n1);
	scanf ("%d",&n2);
	r=n1-n2;
	s=n1+n2;
	printf ("los numeros ingreasados son %d %d, la suma de los mismos es %d, y su resta en el orden ingresado es %d",n1,n2,s,r);
	
	
	system ("pause");
	
	return 0;
	
}
