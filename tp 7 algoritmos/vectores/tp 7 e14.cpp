#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
   #warning :no funciona
	char v[10];
	char aux;
	int conta=0,vali,valj;
	for (int i=0;i <= 11;i++)
	{
		scanf ("%c",&v[i]);
		fflush(stdin);
		v[i]=toupper(v[i]);
	}// carga los valores en el vector
	
	for (int i=0,j=1;j <= 10;i++,j++)
{
	  vali=v[i];
	  valj=v[j];
	 
	  if (vali < valj)
			  {
        		   
		 		 conta ++;
		           printf ("valor contador %d \n ",conta);   
	 			 }
       else 
       {
         printf ("cambia i %c a j %c \n",v[i],v[j]);       
	   	aux=v[j];
       	v[j]=v[i];
       	v[i]=aux;
       	conta =0;
       	printf ("cambio i %c a j %c \n",v[i],v[j]);  
		i=0;
       	j=1;
	   }
if(conta == 11)
    {
	printf ("salio \n");  
	break ;	}
}
for (int i=0;i <= 11;i++) printf ("%c \n",v[i]);

system ("pause");
return 0;
}
