#include <iostream>
#include <stdio.h>
#include <ctype.h>
int main ()
{
	char p[25];
	int tam=0,max,dp=0,j;
	printf ("ingrese la palabra letra por letra hasta precionar un numero \n");
	for (int i=0;i <= 25;i++)
	{
		scanf("%c",&p[i]);
		fflush(stdin);
		if(isdigit (p[i]))
		{
			break ;
		}
	    tam++;  	
		  
    }
    max=tam/2;
    
    j=tam-1;

	for (int i=0;i <= max;i++)
    {
      if(p[i]==p[j])
      {
      	dp++;
	  }
	 j--;
	}
	
	if (dp==(max+1))
	{
		printf ("es un palindromo \n");
	}
			
	else
	{
		printf ("no es un palindromo \n");
	 } 
     
system ("pause");
return 0;
}
