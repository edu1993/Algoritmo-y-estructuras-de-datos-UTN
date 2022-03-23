#include <stdlib.h> 
#include <iostream>
#include <time.h>


main ()
{

srand(time (NULL));
for (int i=0;i<=4;i++)
{
printf ("%c \n",'A'+rand ()%(('Z' - 'A') + 1));	
}

system ("pause");
return 0;
}

