#include <iostream>

using namespace std;

int main ()
{
	float por;
	int cand1=0, cand2 =0, cand3=0,total;
	int vot=0;
	printf ("introdusca \n1 para candidato 1\n2 para candidato 2\n3 para candidato 3\n---cero para finalizar---\ncomiense volcado de datos\n ");
	do
	{
		scanf("%d",&vot);
		if (vot==1)
		{
			cand1++;
		}
		if (vot==2)
		{
			cand2++;
		}
		if (vot==3)
		{
			cand3++;
		}
	}while(vot!=0);
	total= cand1+ cand2+ cand3;
	printf ("la cantidad de votos es %d\n%d para el candidato 1\n%d para el candidato 2\n%d para el candidato 3 \n ",total,cand1,cand2,cand3);
	if (cand1 > cand2 && cand1 > cand3)
	{
		por=(100*cand1)/total;
		printf ("El ganador es candidato 1 con el %.2f porciento de los votos \n " ,por);
	}
	if (cand2 > cand1 && cand2 > cand3)
	{
		por=(100*cand2)/total;
		printf ("El ganador es candidato 2 con el %.2f porciento de los votos \n " ,por);
	}
	if (cand3 > cand2 && cand3 > cand1)
	{
		por=(100*cand3)/total;
		printf ("El ganador es candidato 3 con el %.2f porciento de los votos \n " ,por);
	}
	
	
  
system ("pause");
return 0;


}



