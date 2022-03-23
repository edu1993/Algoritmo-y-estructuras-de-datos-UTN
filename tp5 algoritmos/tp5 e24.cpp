#include <iostream>

using namespace std;

int main ()
{
 int n, m,r;
 printf ("ingrese un numero para obtener su tabla de multiplicar \n");
 scanf ("%d",&n);
for (m=0; m < 11; m = m + 1) 
{
	r=m*n;
 printf ("%d * %d = %d \n",m,n,r);	
}	
  
system ("pause");
return 0;


}

