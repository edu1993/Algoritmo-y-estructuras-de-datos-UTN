#include <iostream>



struct fecha_nac
{
	int dia;
	int mes;
	int ano;
};
struct persona
{
	char nombre[20];
	char apellido[20];
	int edad;
	struct fecha_nac nac;
	
} persona1={"Garcia", "Marquez", 19, 15,10,1998},
persona2={"Frida", "Ribera", 25, 19,04,1993},
persona3={"Violeta", "Parra", 40, 06,03,1978};

int main()
{
	printf("Nombre:%s\n",persona1.nombre)	;
	printf("Apellido:%s\n",persona1.apellido)	;
	printf("Edad:%d\n",persona1.edad)	;
	printf("Fecha de nacimiento:%d/%d/%d\n",persona1.nac.dia,persona1.nac.mes,persona1.nac.ano)	;
	printf("\n \n");
	printf("Nombre:%s\n",persona2.nombre)	;
	printf("Apellido:%s\n",persona2.apellido)	;
	printf("Edad:%d\n",persona2.edad)	;
	printf("Fecha de nacimiento:%d/%d/%d\n",persona2.nac.dia,persona2.nac.mes,persona2.nac.ano)	;
	printf("\n \n");
	printf("Nombre:%s\n",persona3.nombre)	;
	printf("Apellido:%s\n",persona3.apellido)	;
	printf("Edad:%d\n",persona3.edad)	;
	printf("Fecha de nacimiento:%d/%d/%d\n",persona3.nac.dia,persona3.nac.mes,persona3.nac.ano)	;
	printf("\n \n");
	system("pause");
	return 0;
}
