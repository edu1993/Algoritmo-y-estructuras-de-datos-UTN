#include <iostream>

using namespace std;

int main ()
{
	
	int a [10],i,n,acum;
	
	printf ("ingrese dies numeros \n");
	
	
	
	for (i=1; i < 10; i = i + 1) {
	 scanf ("%d",&n);
	 a[i]=n;
	 
	 	
	 
		}
    
	printf ("la suma de los numero ingresados es  \n");
	for (i=1; i < 10; i = i + 1) {
	acum= acum + a[i];
	 
	}
    printf ("%d \n",acum);
  
system ("pause");
return 0;


}
