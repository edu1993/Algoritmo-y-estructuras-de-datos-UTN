#include <iostream>

using namespace std;

int main ()
{
	int mes;
	printf ("ingrese el numero de mes para saber los dias que contiene \n");
	scanf ("%d",&mes);
	switch (mes)
	{
		case 1:
			printf ("enero \n cantidad de dias 31");
			break;
		case 2:
			printf ("febrero \n cantidad de dias 28 o 29 si el año es bisiesto \n");
			break;
		case 3:
			printf ("marzo \n cantidad de dias 31 \n");
			break;
		case 4:
			printf ("abril \n cantidad de dias 30 \n");
			break;
		case 5:
			printf ("mayo \n cantidad de dias 31 \n");
			break;
		case 6:
			printf ("junio \n cantidad de dias 30 \n");
			break;
		case 7:
			printf ("julio \n cantidad de dias 31 \n ");
			break;
		case 8:
			printf ("agosto \n cantidad de dias 31 \n ");
			break;
		case 9:
			printf ("septiembre \n cantidad de dias 30 \n ");
			break;
		case 10:
			printf ("octubre \n cantidad de dias 31 \n");
			break;
		case 11:
			printf ("noviembre \n cantidad de dias 30 \n");
			break;
		case 12:
			printf ("diciembre \n cantidad de dias 31 \n");
			break;	
		default: 
			printf ("no existe el numero del mes ingresado \n")	;
												
	}
  
  
system ("pause");
return 0;


}
