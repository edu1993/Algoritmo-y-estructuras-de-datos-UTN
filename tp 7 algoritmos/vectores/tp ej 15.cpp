#include <iostream>

int main()
{
     int v[10],aux;
     for (int i=0;i <= 9;i++)
     {
     	scanf ("%d",&v[i]);
	 }
	 for (int i=0;i <= 8;i++)
     {	
     	if(v[i]>v[i+1])
     	{
     		aux=v[i];
     		v[i]=v[i+1];
     		v[i+1]=aux;
     		i=0;
		 }
	 }
	 for (int i=0;i <= 9;i++)
     {
     	printf ("%d \n",v[i]);
	 }		
		

	system("pause");
	return 0;
}
