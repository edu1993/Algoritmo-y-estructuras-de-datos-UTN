#include <iostream>

using namespace std;

int main ()
{
 float inv1, inv2, inv3,totalinv,p1,p2,p3;
	
	 printf ("ingrese invercion del inversor 1 \n");
 	 scanf ("%f",&inv1);
 	 printf ("ingrese invercion del inversor 2 \n");
 	 scanf ("%f",&inv2);
 	 printf ("ingrese invercion del inversor 3 \n");
     scanf ("%f",&inv3);
     totalinv= inv1 + inv2 + inv3;
     p1= (inv1 * 100)/ totalinv;
     p2= (inv2 * 100)/ totalinv; 
     p3= (inv3 * 100)/ totalinv;

printf ("El total de la invercion realizada es de %.2f \n",totalinv);
printf (" El inversor uno invertio %.2f lo cual representa el %.2f porciento del total. \n ",inv1,p1);
printf ("El inversor dos invertio %.2f lo cual representa el %.2f porciento del total. \n ",inv2,p2);
printf ("El inversor tres invertio %.2f lo cual representa el %.2f porciento del total. \n ",inv3,p3);

system ("pause");
return 0;


}
