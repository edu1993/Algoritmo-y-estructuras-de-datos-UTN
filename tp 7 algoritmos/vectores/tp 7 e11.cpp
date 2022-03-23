#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
int main ()
{
	char m1='Z';
	char v[15];
	for (int i=0; i<=15; i++)
	{
		printf ("ingrese la letra numero %d \n ",i);
		scanf ("%c",&v[i]);
		v[i]=toupper(v[i]);
		fflush (stdin);
		system ("cls");				
	}
    	for (int i=0; i<=15; i++)
    	{
    		 if (m1 >= v[i])
    		 {
    		 	m1=v[i];
			 }
		}
    printf ("la mayor letra ingresada fue %c \n",m1);
    system ("pause");
    return 0;
    
}
