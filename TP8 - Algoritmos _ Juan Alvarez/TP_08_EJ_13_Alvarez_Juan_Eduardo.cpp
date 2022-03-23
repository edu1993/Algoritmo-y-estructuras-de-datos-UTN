#include <iostream>
#include <string.h>
#include <ctype.h>
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
	
	int da,ma,aa,n,x=0;
	
	int d=0,m=0,a=0;
	char aux[20];
		
	do
	{
	
		printf("Ingrese el dia actual\n");
		scanf ("%d", & da);
		printf("Ingrese el mes actual\n");
		scanf ("%d", & ma);
		printf("Ingrese el a%co actual\n", 164);
		scanf ("%d", & aa);
		system ("cls");
		for(int i=0;i <=2;i++)
		{
			if(x==0)
			{
			
			fflush(stdin);
			printf("Nombre:\n");
			gets(aux);
			aux[0]=toupper(aux[0]);
			strcpy(persona[i].nombre,aux);
			printf("Apellido:\n");
			gets(aux);
			aux[0]=toupper(aux[0]);
			strcpy(persona[i].apellido,aux);
			printf("Datos de nacimiento:\n");
			
			printf("Dia:\n");
			do
			{
			scanf("%d",&persona[i].nac.dia);
			if (persona[i].nac.dia > 31)
			{
				printf("Error,dia mal ingresado \n");
				
			}
			else
			{
				d=1;
			}
			}while(d!=1);
				do
			{
			printf("Mes:\n");
			scanf("%d",&persona[i].nac.mes);
			if (persona[i].nac.mes >12)
			{
				printf("Error,mes mal ingresado \n");
				
			}
			else
			{
				m=1;
			}
			}while(m!=1);
				do
			{
			printf("A%co:\n",164);
			scanf("%d",&persona[i].nac.ano);
				if (persona[i].nac.ano >2025)
			{
				printf("Error,a%co mal ingresado \n",164);
				
			}
			
			else
			{
				
				if(persona[i].nac.ano <1900)
				{
					printf("Error,a%co mal ingresado \n",164);
				}
				else
				{
					a=1;
				}
			}
			}while(a!=1);
			printf("\n \n");
			d=0;
			m=0;
			a=0;
	     }
		//calcula la edad
			if (ma > persona[i].nac.mes)
		{
			persona[i].edad=(aa-persona[i].nac.ano);
	
		}

		if (ma == persona[i].nac.mes)
			{
				if(da >= persona[i].nac.dia);
					{
						persona[i].edad=(aa-persona[i].nac.ano);
					}
			}
		else
			{
				persona[i].edad=(aa-persona[i].nac.ano)-1;
			}
		
		
		}	
        
	
	
		for (int i=0;i <=2;i++)
		{
			printf("Nombre:%s\n",persona[i].nombre);
			
			printf("Apellido:%s\n",persona[i].apellido);
			
			printf("edad:%d\n",persona[i].edad);
			printf("fecha de nacimiento:%d/%d/%d \n",persona[i].nac.dia,persona[i].nac.mes,persona[i].nac.ano);
			printf("\n \n");
		}
		printf("Desea actualizar la fecha precione 1,para salir 0");
		scanf("%d",&n);
		x++;
	   }while(n != 0);
	
	system("pause");
	return 0;
}
