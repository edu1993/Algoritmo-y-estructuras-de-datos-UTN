#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
struct persona
{
	char nombre[20];
	char apellido[20];
	int edad;
	char sexo[20];
	
} dato[3];
int main ()
{
	char aux[20],auxc;
	for (int i=0;i<=2;i++)
	{
		fflush(stdin);
		printf ("Ingrese el nombre de la persona\n");
		gets(aux);
		aux[0]=toupper(aux[0]);
		strcpy(dato[i].nombre,aux);
		printf ("Ingrese el apellido de la persona\n");
		gets(aux);
		aux[0]=toupper(aux[0]);
		strcpy(dato[i].apellido,aux);
		printf ("Ingrese el edad de la persona\n");
		scanf ("%d", &dato[i].edad);
		printf ("Ingrese sexo m o f\n");
		fflush(stdin);
		scanf("%c",&auxc);
		auxc=toupper(auxc);
		if (auxc=='M')
		{
			strcpy(dato[i].sexo,"Masculino");
		}
		else
		{
			strcpy(dato[i].sexo,"Femenino");	
		}
		printf ("\n \n");
		
	}
	system("cls");
	for (int i=0;i<=2;i++)
	{
		printf("%s,%s %s de %d de edad",dato[i].apellido,dato[i].nombre,dato[i].sexo,dato[i].edad);
		printf("\n \n");
	}

system ("pause");
return 0;
}
