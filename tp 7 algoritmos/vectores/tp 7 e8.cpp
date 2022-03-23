#include <iostream>

int main ()
{
	const int n=12;
	 int v1[n];
	 int vaux[n];
	 int x;
	 printf ("ingrese 10 numeros precionando enter \n");
	 for (int i =n;i >=1;i--)
	 {
	 	scanf ("%d",&x);
	 	v1[i]=x;
	 }
     system ("cls");
   	 printf ("el vector ingresado contiene los sig valores, de largo %d \n",n);
		for (int i=1;i <= n;i++)
   	 {
   	 	printf ("%d \t",v1[i]);
   	 	
   	 }
putchar ('\n');
system ("pause");
return 0;
}
