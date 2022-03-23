#include <iostream>

using namespace std;

int main ()
{
float sb,com,total,tcom,vcom;									 /*glosario : sb=sueldo base, com=porcentaje de la comicion, tcom=suma de las comiciones, cantcom= cantidad de comiciones */
int cantcom;

printf ("ingrese sueldo base \n ");
scanf ("%f",&sb);	
printf ("ingrese porcentaje de la comicion en digitos enteros\n ");
scanf ("%f",&com);
printf ("ingrese cantidad de comiciones cobradas en el mes \n ");
scanf ("%d",&cantcom);  
com= com/100;
vcom=sb*com;
tcom=vcom*cantcom;
total=sb+tcom;
printf (" el valor de cada comicion es de %.2f \n el valor total de las comiciones es %.2f \n el total a cobrar es de %.2f \n",vcom,tcom,total);

system ("pause");
return 0;


}
