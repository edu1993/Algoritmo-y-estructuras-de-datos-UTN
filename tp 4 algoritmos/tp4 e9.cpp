#include <iostream>

using namespace std;

int main ()
{
	
  int n1, n2, n3 ;
  
  printf ("ingrese tres numeros precionando enter despues de cada numero ingresado \n");
  scanf ("%d", &n1);
  scanf ("%d", &n2);
  scanf ("%d", &n3);
  if (n1 < n2 && n1 < n3)
  {
  	printf ("el menor es %d \t",n1);
  }
 if (n2 < n1 && n2 < n3)
  {
  	printf ("el menor es %d \t",n2);
  }
 if (n3 < n2 && n3 < n1)
  {
  	printf ("el menor es %d \t",n3);
  }


system ("pause");
return 0;


}
