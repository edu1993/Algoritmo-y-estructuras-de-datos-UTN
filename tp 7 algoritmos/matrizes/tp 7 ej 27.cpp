#include <iostream>

int main()
{
	//char v[10]={'a','e','i','o','u','A','E','I','O','U'};
	char voc[3][4];
	int cont=0,x=0;
	int pi[12],pj[12];
    printf ("ingrese vocales solamente \n");
    for (int i=0;i <=2;i++)
    {
    	for (int j=0; j <=3;j++)
    	{
    		scanf ("%c",&voc[i][j]);
    		fflush(stdin);
    		
		}
	}
	system ("cls");
	
for (int i=0; i<=2;i++)
{
	for(int j=0; j <= 3;j++)
	{
		printf ("%c ",voc[i][j]);
		if (voc[i][j]=='a'||voc[i][j]=='A')
		{
			cont++;
			pi[x]=i;
			pj[x]=j;
			x++;
		}
	}
printf ("\n");
}
printf ("la cantidad de a ingresadas es %d \nen las posiciones\n",cont);
for (x=0;x<=cont-1; x++) printf ("F:%d C:%d \n",pi[x],pj[x]);
}
