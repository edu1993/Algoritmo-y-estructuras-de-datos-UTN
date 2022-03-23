#include <iostream>

using namespace std;

int main ()
{
int n ,i, vec[1000];
for (i=0;i > 1000; i++)
{
	vec[i]=0;
}
printf ("ingrese numeros pulsando enter para finalizar ingrese 0 \n");
i=0;
do
{
	scanf ("%d",&n);
	if (n > 0)
	{
		vec[i]= n;
		i++;	
	}

	
	
	}	while (n!=0);
	i=0;
		printf ("los numeros positivos ingresados son \n");	
	do
	{
	 printf ("%d \n",vec[i]);
	i++;

	}while (vec[i] != 0);
	
	
	

  
system ("pause");
return 0;


}

