/* 4. Desarrolle un programa que utilizando la estructura anterior 
muestre al usuario datos que usted le haya cargado y le de la 
opción de modificarlos. Muestre los datos finales.*/


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
	int n,cont=0;
	
	do{
	if (cont ==0)
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
	}
	if(cont!=0)
	{
		n--;
			fflush(stdin);
		printf ("Ingrese el nombre de la persona\n");
		gets(dato[n].nombre);
	
		printf ("Ingrese el apellido de la persona\n");
		gets(dato[n].apellido);
		
		printf ("Ingrese el edad de la persona\n");
		scanf ("%d", &dato[n].edad);
		printf ("Ingrese sexo \n");
		fflush(stdin);
		scanf("%c",&dato[n].sexo);
		printf ("\n \n");	
	}
	
	system("cls");
	for (int i=0;i<=2;i++)
	{
		printf ("DATO:%d\n",i+1);
		printf ("Nombre:%s\n",dato[i].nombre);
		printf ("Apellido:%s\n",dato[i].apellido);
		printf ("Edad:%d\n",dato[i].edad);
		printf ("Sexo:%c\n",dato[i].sexo);
		printf("\n \n");
	}
	printf ("Desea corregir algun dato?\nPresione el numero del dato que desea modificar, de lo contrario presione 0 para salir y guardar\n");
    scanf("%d",&n);
    cont++;
    }while (n!=0);
system ("pause");
return 0;
}
