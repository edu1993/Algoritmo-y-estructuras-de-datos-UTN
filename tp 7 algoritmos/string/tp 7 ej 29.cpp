#warning: este codigo ordena alfabeticamente de adelante para atras
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char c1[100],c2[100],aux;
    printf ("Ingrese cadena 1 \n");
    scanf("%s",c1);
	printf ("Ingrese cadena 2 \n");
    scanf("%s",c2);
    fflush(stdin);
	strlwr(c1);
    strlwr(c2);

	for(int i=0; i <= (strlen(c2))-1;i++)

	{
		if(c2[i]<c2[i+1])
		{
			aux=c2[i];
			c2[i]=c2[i+1];
			c2[i+1]=aux;
			i=0;
		}
	  
	}	
	printf ("%s\n ",c2);
		for(int i=0; i <= (strlen(c1))-1;i++)

	{
		if(c1[i]<c1[i+1])
		{
			aux=c1[i];
			c1[i]=c1[i+1];
			c1[i+1]=aux;
			i=0;
		}
	  
	}
    printf ("%s\n ",c1 );
	strcat (c1,c2);
	strcat(c2,c1);
	strcat(c1,c2);
	printf ("%s\n ",c1);
	
	system ("pause");
	return 0;
	
	
}
