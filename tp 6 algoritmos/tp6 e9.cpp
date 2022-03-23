#include <stdlib.h> 
#include <iostream>
#include <math.h>


main ()
{
float n;
printf ("ingrese un numero para obtener su valor elevado al cubo \n");
scanf("%f",&n);
 
n= pow(n,3);
printf ("el valor al cubo es : \t %.2f \n",n);
system ("pause");
return 0;
}

