#include <iostream>

int main()
{
	int x=0;
	char v [10],aux;
	printf ("ingrese 10 letras \n");
	for (int i=0;i <=9;i++)
	{
		scanf("%c",&v[i]);
		fflush(stdin);
	}
    for (int i=0;i <=8;i++)
	{
		if(v[i]>v[i+1])
		{
			aux=v[i];
			v[i]=v[i+1];
			v[i+1]=aux;
			i=0;
		}
		
		
			
		
	}
     printf("vector ordenado  \n");
	for (int i=0;i <=9;i++)
	{
		printf ("%c\n",v[i]);
	}	
			
		

	system("pause");
	return 0;
}
