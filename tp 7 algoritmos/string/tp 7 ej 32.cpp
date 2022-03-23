#include <iostream>
#include <string.h>

int main()
{
	char s[100];
	int l,p;
	gets(s);
	l =strlen(s)-1;
	for (int i=0, j=l;i <= l;i++,j--)
	{
		if (s[i]==s[j])
		{
			p=1;
		}
	   else 
	   {
	     p=0;
		 break; 
	   }
	}
	if (p==1)
	{
		printf ("la palbra es un polindromo \n");
	}
	else
	{
		
		printf ("la palabra no es un polindromo \n");	
		
		}	
	
	system ("pause");
	return 0;
	
}

		 
