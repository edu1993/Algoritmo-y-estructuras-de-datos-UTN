#include <iostream>
#include <string.h>


struct empleado {
	float vh;
	char nombre [45];
	int ant;
	float hm;
	float tbruto;
    float tdescuento;
	float tneto;
} empleado[1];

int main() {
	for (int i=0; i <=4; i++) 
	{
		printf("Empleado numero:%d \n",i+1);
		puts ("Ingrese nombre del empleado :");
		fflush(stdin);
		gets(empleado[i].nombre);
		puts ("Ingrese valor hs del empleado :");
		scanf("%f",&empleado[i].vh);
		puts ("Ingrese la antiguedad en años del empleado :");
		scanf("%d",&empleado[i].ant);
		puts ("Ingrese la cantidad  de hs mensuales del empleado :");
		scanf("%f",&empleado[i].hm);
		empleado[i].tbruto=((empleado[i].ant*30)+(empleado[i].hm*empleado[i].vh));
		empleado[i].tdescuento=((empleado[i].tbruto*13)/100);
		empleado[i].tneto=empleado[i].tbruto-empleado[i].tdescuento;
		system("cls");
	}
	system("cls");
	for (int i=0; i <=4; i++) 
	{
		puts (empleado[i].nombre);
		
		
	    printf("Valor hs : %.2f \n",empleado[i].vh);
		
		printf("Antiguedad en años del empleado :%d \n",empleado[i].ant);
		printf("El total en bruto a cobrar es: %.2f \n",empleado[i].tbruto);
		printf("El de desdecuentos  es: %.2f \n",empleado[i].tdescuento);
		printf("El total  neto a cobrar es: %.2f \n",empleado[i].tneto);
		puts("------------------------------------------------------------------------------");
	}
system("pause");
return 0;
}

