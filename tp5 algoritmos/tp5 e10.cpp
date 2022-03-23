#include <iostream>

using namespace std;

int main ()
{
	
	int a [10],i,n,acum = 0;
	
	printf ("ingrese dies numeros \n");
	
	
	
	for (i=0; i < 10; i = i + 1) {
	 scanf ("%d",&n);
	 a[i]=n;
	 
	 	
	 
		}
    

	for (i=0; i < 10; i = i + 1) {
	if (a[i]< 0 )
	{
		acum= acum + a[i];
	}
	 
	}
    printf ("la suma de los numeros negativos es: %d \n" , acum);
  
system ("pause");
return 0;


}
