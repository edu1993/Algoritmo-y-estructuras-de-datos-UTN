#include <stdlib.h> 
#include <iostream>
#include <ctype.h>


main ()
{
int n;
printf ("ingrese un numero para obtener su valor absoluto \n");
scanf("%d",&n);
#warning el abs solo devuelve enteros 
n= abs(n);
printf ("el valor absoluto es : \t %d \n",n);
system ("pause");
return 0;
}

