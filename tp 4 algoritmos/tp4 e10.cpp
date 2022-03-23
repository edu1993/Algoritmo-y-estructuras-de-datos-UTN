#include <iostream>

using namespace std;

int main ()
{
int n;
printf ("ingrese un numero \n");
scanf("%d", &n);	
if(n==0)
{
	printf ("el numero ingresado es cero \n");
}
if (n<0)
{
	printf ("el numero ingresado es menor que cero \n");
  }  
if (n> 0)
{
	printf ("el numero es mayor que cero \n");
}
system ("pause");
return 0;


}
