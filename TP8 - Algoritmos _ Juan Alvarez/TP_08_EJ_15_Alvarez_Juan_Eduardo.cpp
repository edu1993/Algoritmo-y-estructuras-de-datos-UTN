#include <iostream>
#include <stdio.h> 
#include <ctype.h>
#include <string.h>
struct fecha_nacimiento
{
	int dia;
	int mes;
	int ano;
};

struct direcion
{
	char calle[30];
	int altura;
	int codpostal;
	char ciudad[30];
};

struct agenda
{
	int contenido;
	char nombre[20];
	char apellido[20];
	struct fecha_nacimiento fn;
	struct direcion dir;
	unsigned long long int telefono;
}agen[15];


int main()
{
	int r;
	char aux[20],apellidob[20];
	for (int i=0;i < 15;i++)
	{
        agen[i].contenido;
        }
do
{

	int s,s2=1,i=0,bc=0;
	
	
    system("cls");
	printf("AGENDA:\n");
	printf("Precione 1:Para buscar un contacto:\n");
	printf("Precione 2:Para cargar un contacto:\n");
	printf("Precione 3:Para ver todos los contactos disponibles:\n");
	
   	scanf("%d",&s);
   	
   	system("cls");
   	
   	//agregar contacto
   	if(s==2)
   	{
	  do
	  {
	  	if(agen[i].contenido==0)
	  	{
	  		fflush(stdin);
			printf("Ingrese nombre: \n");
	  		gets(aux);
			aux[0]=toupper(aux[0]);
			strcpy(agen[i].nombre,aux);
			printf("Ingrese apellido: \n");
			fflush(stdin);
	  		gets(aux);
			aux[0]=toupper(aux[0]);
			strcpy(agen[i].apellido,aux);
			printf("Ingrese datos fecha nacimiento: \n");
			printf("Dia: \n");
			scanf("%d",&agen[i].fn.dia);
			printf("Mes: \n");
			fflush(stdin);
			scanf("%d",&agen[i].fn.mes);
			printf("A%co: \n",164);
			fflush(stdin);
			scanf("%d",&agen[i].fn.ano);
			fflush(stdin);
			printf("Ingrese datos de direcion: \n");
			printf("Ingrese ciudad: \n");
			fflush(stdin);
	  		gets(aux);
			aux[0]=toupper(aux[0]);
			strcpy(agen[i].dir.ciudad,aux);
			printf("Ingrese calle: \n");
	  		gets(aux);
			aux[0]=toupper(aux[0]);
			strcpy(agen[i].dir.calle,aux);
			printf("Altura: \n");
			scanf("%d",&agen[i].dir.altura);
			printf("codigo postal: \n");
			fflush(stdin);
			scanf("%d",&agen[i].dir.codpostal);
			printf("Ingrese telefono: \n");
			scanf("%llu",&agen[i].telefono);
			agen[i].contenido=1;
			s=0;
		  }
	  	else
	  	{
	  		i++;
	  		if(i==14)
	  		{
	  			printf("No hay mas lugar en la agenda \n");
	  			s=0;
			  }
		  }
	  	
	  }while(s!=0);
	
	}
	
	//buscar contacto
     if (s==1)
	{
		printf("Ingrese apellido a buscar \n");
		
	  		fflush(stdin);
			  gets(aux);
			aux[0]=toupper(aux[0]);
			strcpy(apellidob,aux);
		if (agen[0].contenido==1)
		{
		
		for (int i=0; agen[i].contenido ==0,i <=14;i++)
		{
			if(strcmp(agen[i].apellido,apellidob)==0)
			{
				printf("CONTACTO:%s,%s\t\n",agen[i].apellido,agen[i].nombre);
				printf("FECHA DE NACIMIENTO:%d/%d/%d\t\n",agen[i].fn.dia,agen[i].fn.mes,agen[i].fn.ano);
				printf("TELEFONO:%llu\t\n",agen[i].telefono);
				printf("DIRECCION:%s %d -(%d)%s\t\n",agen[i].dir.calle,agen[i].dir.altura,agen[i].dir.codpostal,agen[i].dir.ciudad);
			    bc=1;
			}
			
		}
		if (bc==0)
		{
			printf("El contacto no fue allado \n");
		}
		}
	}

	//ver todos los contactos disponibles
	if(s==3)
	{
		if(agen[i].contenido==1)
		{
		
		for(int i=0;i <=14;i++)
			{
				if(agen[i].contenido==1)
				{
                printf("CONTACTO:%s,%s\t",agen[i].apellido,agen[i].nombre);
				printf("FECHA DE NACIMIENTO:%d/%d/%d\t\n",agen[i].fn.dia,agen[i].fn.mes,agen[i].fn.ano);
				printf("TELEFONO:%llu\t\n",agen[i].telefono);
				printf("DIRECCION:%s %d -(%d)%s\t\n",agen[i].dir.calle,agen[i].dir.altura,agen[i].dir.codpostal,agen[i].dir.ciudad);
            }	
			}
		}
		else
		{
			printf("No hay contactos disponibles \n ");
		}
	}	
   printf ("Desea realizar otra operacion precione 1 para no precione 0 \n");
   fflush(stdin);
   scanf("%d",&r);
  }while(r!=0);
  system ("pause");
  return 0;
}
