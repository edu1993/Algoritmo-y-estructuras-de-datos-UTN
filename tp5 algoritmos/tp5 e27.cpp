#include <iostream>

using namespace std;

int main ()
{
	char sn;
	float l,acum,promedio;
	int cont=1,e=1;
	do
	{
		
		printf ("ingrese registro de lluvia numero  \n %d \t",cont);
		scanf ("%f",&l);
		acum= acum +l;
		printf ("¿desea ingresar mas datos?, introdusca s para si y n para no \n");
		scanf("%c",&sn);
		if (sn == 'n')
		{
			e=0;
		}
		else 
		{
			
		}
		
	}while (e!=0);
    promedio=acum / cont;
    printf ("el promedio de lluvia anual fue de %.2f \n",promedio);
system ("pause");
return 0;


}



