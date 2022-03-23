/* 3. Desarrolle un programa que utilizando la estructura anterior 
permita cargar los datos de tres personas solicitando los mismos. 
Muestre los datos ingresados.*/

#include <iostream>
#include <stdio.h>
struct persona
{
	char nombre[20];
	char apellido[20];
	int edad;
	char sexo;
} dato[3];
int main ()
{
	for (int i=0;i<=2;i++)
	{
		fflush(stdin);
		printf ("Ingrese el nombre de la persona\n");
		gets(dato[i].nombre);
	
		printf ("Ingrese el apellido de la persona\n");
		gets(dato[i].apellido);
		
		printf ("Ingrese el edad de la persona\n");
		scanf ("%d", &dato[i].edad);
		printf ("Ingrese sexo \n");
		fflush(stdin);
		scanf("%c",&dato[i].sexo);
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
