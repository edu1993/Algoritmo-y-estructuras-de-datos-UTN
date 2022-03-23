#include <iostream>
#include <time.h>
#include <stdlib.h>
int main()
{
  srand(time(NULL));
  int m[5][6],c[3]={0,0,0};
  
  
  for (int i=0;i <=4;i++)
  {
  	for (int j=0;j <=5;j++)
  	{
  		m[i][j]=rand()%(30-(-30)+1)+(-30);
	   if (m[i][j]>0)
	   {
	   	c[1]++;//positivo
	   }
	  if (m[i][j]<0)
	   {
	   	c[2]++;//negativo
	   }
	   if(m[i][j]==0)
	   {
	   	c[0]++;//cero
	   }
	  }
	
	}
	 for (int i=0;i <=4;i++)
  {
  	for (int j=0;j <=5;j++)
  	{
  		printf (" %d|",m[i][j]);
	  }
	printf ("\n");
	}	
printf("P:%d\nN:%d\nC:%d\n",c[1],c[2],c[0]);
system ("pause");
return 0;
}
