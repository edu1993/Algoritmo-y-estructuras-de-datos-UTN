#include <stdlib.h> 
#include <iostream>
#include <time.h>


main ()
{

srand(time (NULL));
for (int i=0;i<=4;i++)
{
printf ("%d \n",rand ()%200+100);	
}

system ("pause");
return 0;
}

