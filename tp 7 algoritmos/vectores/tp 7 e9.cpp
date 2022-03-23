#include <iostream>
#include <time.h>
#include <stdlib.h>
main ()
{
	
	int v[10]={0,0,0,0,0,0,0,0,0,0};
	srand (time (NULL));
	for (int i =1;i <= 100; i++)
	{
		switch (rand ()% 10)
		{
			case 0:
			{v[1]++;
			break;
			} 
				case 1:
			{v[2]++;
			break;
			} 
				case 2:
			{v[3]++;
			break;
			} 
				case 3:
			{v[4]++;
			break;
			} 
				case 4:
			{v[5]++;
			break;
			} 
				case 5:
			{v[6]++;
			break;
			} 
				case 6:
			{v[7]++;
			break;
			} 
				case 7:
			{v[8]++;
			break;
			} 
				case 8:
			{v[9]++;
			break;
			} 
			
			
				case 9:
			{v[10]++;
			break;
			} 
			
				
		}
	}
for (int i =1; i <= 10;i++)
{
	printf ("la cantidad de %d es de %d \n",i-1,v[i]);
}
system ("pausa");
return 0;

}
