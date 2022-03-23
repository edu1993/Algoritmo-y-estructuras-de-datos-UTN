#include <iostream>
#include <time.h>

#include <stdlib.h>
int main()
{
srand (time(NULL));
	int v[20];
	int ma,me,pma,pme,cont=1;
	for (int i=1;i<=20;i++)
	{
		v[i]=rand () %100; 
	   if (i==1)// da valores en la primera asignacion
	   {
	   	ma=v[i];
	   	me=v[i];
	   	pma=i;
	   	pme=i;
	   }

	
	 if (ma <= v[i])
	 {
	 	ma =v[i];
	 	pma=i;
	 }
	 if (me >= v[i])
	 {
	 	me =v[i];
	 	pme=i;
	 }
	
	   
	
	}
	 printf ("los valores del vector son:\n");
	 for (int i=1;i<=20;i++) printf ("valor: %d ||  posicion: %d \n",v[i],i);
	 printf ("el mayor valor presente es : %d y su posicion: %d \n",ma,pma);
	 printf ("el menor valor presente es : %d y su posicion: %d \n",me,pme);
system ("pause");
return 0;	
}
