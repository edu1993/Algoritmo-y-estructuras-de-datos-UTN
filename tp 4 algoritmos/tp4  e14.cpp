#include <iostream>

using namespace std;

int main ()
{
int aac,dac,mac;
int an,dn,mn,edad,edadm;
printf ("ingrese año, mes , dia de nacimiento sucesivamente precionando enter en cada uno \n");
scanf("%d",&an);
scanf ("%d",&mn);
scanf ("%d",&dn);
printf ("a continuacion ingrese fecha actual, año, mes, dia \n");
scanf ("%d",&aac);
scanf ("%d",&mac);
scanf("%d",&dac);
edad= aac-an;
edadm= edad - 1;
if (mn >= mac)
{
	if (mn==mac)
	{
		if (dn >= dac  )
		{
		 if (dn == dac)
		 {
		 	printf ("feliz cumpleaños numero %d ",edad);
		 }
		 else 
		 {
		 	printf ("%d ",edadm);
		 }
		}
		else
		{
			printf ("%d ",edad);
		}
	}
	else
	{
		printf ("%d ",edadm);
	}
}
else 
{
	printf ("%d ",edad);
}

system ("pause");
return 0;


}
