#include <iostream>
struct nacf
{
	int dia;
	int mes;
	int ano;
	
};
struct persona
{
	char nombre[20];
	char apellido [20];
	int edad;
	struct nacf nac;
	
}persona[3];
int main()
{
	int n;
		int cont=0;
	do
	{
	 
		if(cont==0)
		{
		
		for(int i=0;i <=2;i++)
		{
			fflush(stdin);
			printf("Nombre:\n");
			gets(persona[i].nombre);
			printf("Apellido:\n");
			gets(persona[i].apellido);
			printf("Edad:\n");
			scanf("%d",&persona[i].edad);
			printf("Datos de nacimiento:\n");
			
			printf("Dia:\n");
			scanf("%d",&persona[i].nac.dia);
			printf("Mes:\n");
			scanf("%d",&persona[i].nac.mes);
			printf("A%co:\n",164);
			scanf("%d",&persona[i].nac.ano);
			printf("\n \n");
		}	
		
		}
		else
		{
				printf("Nombre:\n");
			gets(persona[n].nombre);
			printf("Apellido:\n");
			gets(persona[n].apellido);
			printf("Edad:\n");
			scanf("%d",&persona[n].edad);
			printf("Datos de nacimiento:\n");
			
			printf("Dia:\n");
			scanf("%d",&persona[n].nac.dia);
			printf("Mes:\n");
			scanf("%d",&persona[n].nac.mes);
			printf("A%co:\n",164);
			scanf("%d",&persona[n].nac.ano);
		}
	
		
		
	printf("Para coregir algun dato ingrese el numero del dato,si no ingrese cero \n")	;
	scanf("%d",&n);
	cont++;	
		
	}while(n!=0);
	system("pause");
	return 0;
}
