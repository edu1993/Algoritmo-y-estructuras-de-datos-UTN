#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
int v1[10];
double v2[10],x;
float v3[10];
for (int i=1;i<=10;i++)
{
	v1[i]=i;
	x=i;
	v2[i]=pow(x,2);
	v3[i]=sqrt(x);
}
printf("v1= \n");
for (int i=1;i<=10;i++)
{
	printf ("%d \t",v1[i]);
	
	
} 
printf("\n v2= \n");
for (int i=1;i<=10;i++)
{
	printf ("%.2f \t",v1[i]);
	
	
} 

printf(" \n v3= \n");
for (int i=0;i<=9;i++)
{
	printf ("%.2f \t",v3[i]);
	
	
} 

printf ("\n");

system ("pause");
return 0;





}
