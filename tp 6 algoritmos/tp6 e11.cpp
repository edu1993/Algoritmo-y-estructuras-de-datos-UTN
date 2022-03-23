#include <stdlib.h> 
#include <iostream>
#include <math.h>


main ()
{
float  b;
printf ("ingrese el numero al cual quiera obtener su raiz cuadrada  \n");
scanf("%f",&b);
b= sqrt(b);
printf ("el valor de la raiz cuadrada  es : \t %.2f \n",b);
system ("pause");
return 0;
}

