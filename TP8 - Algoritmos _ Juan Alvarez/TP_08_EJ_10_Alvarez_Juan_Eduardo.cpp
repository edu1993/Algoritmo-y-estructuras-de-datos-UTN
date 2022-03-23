#include <iostream>
#


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
	
} persona[3];
int main()
{
	for(int i=0;i <= 2;i++)
	{
		fflush(stdin);
		printf("Introdusca Nombre\n");
		gets(persona[i].nombre);
		printf("Introdusca Apellido\n");
		gets(persona[i].apellido);
		printf("Introdusca Edad\n");
		scanf("%d",&persona[i].edad);
		printf("Introdusca dia de nacimiento \n");
		scanf("%d",&persona[i].nac.dia);
		printf("Introdusca mes de nacimiento \n");
		scanf("%d",&persona[i].nac.mes);
		printf("Introdusca a%co de nacimiento \n",164);
		scanf("%d",&persona[i].nac.ano);
		printf("\n \n");
		
		
		
		
	}
    system("cls");
    for (int i=0; i<=2;i++)
    {
    printf("DATO:%d \n",i+1);
    printf("%s,%s de %d ,nacido %d/%d/%d \n\n",persona[i].apellido,persona[i].nombre,persona[i].edad,persona[i].nac.dia,persona[i].nac.mes,persona[i].nac.ano);
	}
	system("pause");
	return 0;
}
