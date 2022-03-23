#include <iostream>

using namespace std;

int main ()
{
	
	int a [10],i,n;
	
	printf ("ingrese dies numeros \n");
	
	
	
	for (i=1; i < 10; i = i + 1) {
	 scanf ("%d",&n);
	 a[i]=n;
	 
	 	
	 
		}
    
	printf ("los numeros positivos son \n");
	for (i=1; i < 10; i = i + 1) {
	if (a[i]> 0 )
	{
		printf ("%d \n ",a[i]);
	}
	 
	}
    
  
system ("pause");
return 0;


}
