#include <iostream>

using namespace std;

int main ()
{
int n, r;
printf ("ingrese un numero  \n");
scanf ("%d",&n);
r=(n+3)%10;
if (r==0)
{
	printf ("este numero termina en 7 \n");
	}	
else 
{
	printf (" el numero no termina en 7 \n");
	
  }
  
  printf ("el numero es %d \n ",n);  
system ("pause");
return 0;


}
