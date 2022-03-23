#include <iostream>

main()
{
	int conta=0;
	char v[10];
	for (int i=1; i <= 10;i++)
	{
		a1:
		fflush(stdin);
		printf ("ingrese la vocal  numero %d \n",i);
		v[i]=getchar();
        v[i]=toupper (v[i]);//tranforma la letra en mayuscula
        {
        	
		}
		if (v[i]!= 'A'&&v[i]!= 'E'&&v[i]!= 'I'&&v[i]!= 'O'&&v[i]!= 'U')// pregunta si es vocal
        {
        	printf ("ERROR NO ES UNA VOCAL INGRESE DE NUEVO UNA VOCAL \n");
        	goto a1;//devuelve al principio para que se vuelva a ingresar el valor
		}
	
        
		if (v[i]=='A')
		{
			conta++;
			}	
	}
     printf ("los valores del vector son: \n");
	for (int i=1;i<= 10;i++)
	{
		printf ("%c \t",v[i]);
	}
	printf (" \n la cantidad de a es:%d \n",conta);
	system ("pause");
	return 0;
}
