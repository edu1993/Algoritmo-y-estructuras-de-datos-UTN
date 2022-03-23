/* 2. Desarrolle un programa que utilizando la estructura anterior permita 
cargar los datos de tres personas cargando los datos al declarar las variables. 
Muestre los datos cargados.*/

#include <iostream>

struct persona
{
	char nombre[20];
	char apellido[20];
	int edad;
	char sexo;
} dato1={"Andres","Rodriguez",10,'M'},
dato2={"Juan","perez",44,'M'},
dato3={"Mia","Gonzalez",20,'F'};
int main ()
{
	printf("Nombre: %s\n",dato1.nombre);
	printf("Apellido: %s\n",dato1.apellido);
	printf("Edad: %d\n",dato1.edad);
	printf("Sexo: %c\n",dato1.sexo);
	
	printf("Nombre: %s\n",dato2.nombre);
	printf("Apellido: %s\n",dato2.apellido);
	printf("Edad: %d\n",dato2.edad);
	printf("Sexo: %c\n",dato2.sexo);
	
	printf("Nombre: %s\n",dato3.nombre);
	printf("Apellido: %s\n",dato3.apellido);
	printf("Edad: %d\n",dato3.edad);
	printf("Sexo: %c\n",dato3.sexo);

system ("pause");
return 0;
}
