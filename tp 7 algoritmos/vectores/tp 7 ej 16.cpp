#include <iostream>

int main()
{
   int v1[5]={1,2,3,4,5};
   int v2[5]={6,7,8,9,10};
   int aux;
   
   for (int i=0;i <= 4;i++)
   {
   	printf ("v1:%d |v2:%d \n",v1[i],v2[i]);
   }
   for (int i=0;i <= 4;i++)
   {
   	aux=v1[i];
   	v1[i]=v2[i];
   	v2[i]=aux;
   }
 printf ("vectores intercambiados \n");
 for (int i=0;i <= 4;i++)
   {
   	printf ("v1:%d |v2:%d \n",v1[i],v2[i]);
   }
   system("pause");
   return 0;
}
