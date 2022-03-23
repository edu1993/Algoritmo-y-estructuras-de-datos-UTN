#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	int ca=0;
	char letra = 'a';
	char c[25];
	printf("Ingrese una palabra o letras al azar \n");
	scanf("%s",c);
	printf ("su largo es %d\n",strlen(c));
	strupr(c);
	printf ("%s \n",c);
	strlwr(c);
	printf("%s \n",c);


for (int i=0; i <= (strlen(c));i++)
{
	
	if (c[i]=='a')
	{
		ca++;
		c[i]='*';
	}
}
printf("Contiene %d 'a'\n",ca);
printf ("%s \n",c);
system ("pause");
return 0;
}
