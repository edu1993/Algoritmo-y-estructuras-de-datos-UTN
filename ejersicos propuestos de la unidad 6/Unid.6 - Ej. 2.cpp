#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
	srand (time(NULL));
	int p=0,n=0,l=0;
	char nn[2]={164,165};// vector que contiene la ñ y Ñ
	char x;
	
	for(int i=1;i <=30;i++)
	{
	 x=33+rand()%221;//los caracteres son generados desde la posicion ascii 33 hasta la 224 ya que ese rango son caracteres imprimibles
	
	 for (int j=0;j <=1 ;j++ ) if (x==nn[j]) l++;// teniendo en cuenta que la ñ no es tomada por isalpha se registra de esta forma 
	
			if (isalpha(x)!=0)
		{
			l++;
		}
		if (isdigit(x)!=0)
		{
			n++;
		}
		if (ispunct(x)!=0)
		{
			p++;
		}


	
	}
printf ("Generacion aleatoria contadores:\nNumeros:%d\nLetras:%d\nCaracteres de puntuacion:%d\n",n,l,p);
system ("pause");
return 0;
}
