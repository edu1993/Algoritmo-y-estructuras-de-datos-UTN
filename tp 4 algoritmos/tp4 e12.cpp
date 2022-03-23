#include <iostream>

using namespace std;

int main ()
{
int n,d,u;

printf ("ingrese un numero \n");
scanf ("%d",&n);

d= n/10;
u= n-(d*10);
printf ("el numero ingresado es %d, su decena es %d, y su unidad es %d \n ",n,d,u)	;
  
system ("pause");
return 0;


}
