#include <stdlib.h> 
#include <iostream>
#include <math.h>


main ()
{
double  b, e;
printf ("ingrese la base precione enter e ingrese el exponente  \n");
scanf("%lf %lf",&b,&e);
b= pow(b,e);
printf ("el valor al cubo es : \t %.2f \n",b);
system ("pause");
return 0;
}

