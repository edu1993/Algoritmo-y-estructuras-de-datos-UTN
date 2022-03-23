#include <iostream>

int main()
{
{
 int v[20],n,p,suma=0;
  printf ("ingrese valores precionando enter, condicion de corte un valor negativo \n");
  for (int i=0;i<=100;i++)
  {
     scanf ("%d",&n);
	 if (n <= -1)
	 {
	 	 system ("cls");
		 break ;
	 }
    
	v[i]=n;
    
	p=i;
    suma+= v[i];
  }
   printf ("la suma de los valores ingresados es %d y la cantidad de valores es %d \n",suma,p+1);
   printf ("los numeros ingresados fueron : \n");
   for (int i=0;i<=p;i++) printf ("%d \n" ,v[i]);
   system("PAUSE");     
   return 0;
}
}
