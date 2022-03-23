#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
struct persona
{
	char nombre[20];
	char apellido[20];
	int edad;
	char sexo;
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
		printf ("Ingrese sexo \n");
		fflush(stdin);
		scanf("%c",&auxc);
		 dato[i].sexo=toupper(auxc);
		
		printf ("\n \n");
		
	}
	system("cls");
	for (int i=0;i<=2;i++)
	{
		printf ("Nombre:%s\n",dato[i].nombre);
		printf ("Apellido:%s\n",dato[i].apellido);
		printf ("Edad:%d\n",dato[i].edad);
		printf ("Sexo:%c\n",dato[i].sexo);
		printf("\n \n");
	}

system ("pause");
return 0;
}
