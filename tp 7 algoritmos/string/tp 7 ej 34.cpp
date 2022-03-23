#include <iostream>
#include <ctype.h>
#include <string.h>
int main()
{
	char c[50];
	char com[]={'.','c','o','m','.','a','r'};
	char espacio=32;
	int l ,p,da=0;
	printf ("ingrese un correo como el del modelo xxxx@xxxx.com.ar \n");
	gets (c);
	l=strlen(c)-1;
	for (int i =0; i <=l;i++)
	{
		if (c[i]==espacio)
		{
			printf ("ERROR:no se admiten espacios en blanco \n");
			break;
		}
		if (isalpha (c[0])!=0||isdigit(c[0]!=0))
		{
			
			p=1;
			i++;
		}
	    else 
	    {
	    	p=0;
	    	break;
	    	
		}
		if (c[i]=='@')
		{
			p=1;
			da=1;	
		}	
        else 
        {
        	p=0;
		}
       if(c[i]=='.')
       {
       	for (int j=(l-7),x=0;j <=l;j++,x++)
       	{
       		if(c[j]==com[x])
       		{
       			p=1;
       			
			 }
			else p=0; 
			   
		}
	   }
	   if (da==1)
	   {
        	if (isalpha (c[0])!=0||isdigit(c[0]!=0))
		{
			
			p=1;
			
		}   	
	   }   
      
	}
if (p==1)
{
	printf("correo valido \n");
}
else 
{
	printf("correo no valido \n");
}
system("pause");
return 0;

}
