#include <iostream>
#include <string.h>
#include <ctype.h>

int main()
{
	int n=1;
	
	char v[50],c[]="1234567";
	do {
	
	printf ("Ingrese para comprobar su valides una cadena de numeros \n");
	gets(v);
	for (int i=0; i <= ((strlen(v))-1) ; i++)
	{
		if (isdigit(v[i])!=0 && strlen (v)==strlen(c))
		{
		
				if (strcmp(v,c)==0)
				{
					printf ("cadena de numeros valida \n");
					puts(v);
					n=0;
					break;
				}		
				else 
				{
					
					printf("uno de los numeros no es valido \n");
					
					system("pause");
					system ("cls");
					break;
				}
		}
		
		else 
		{
			printf ("la cadena de numero ingresada no es valida \ncontiene caracteres que nos son numeros\no sobrepasa la cantidad de numeros\n");
			
		}
	
	}
	
	}while(n != 0);
	
	system("pause");
	return 0;
	
}
