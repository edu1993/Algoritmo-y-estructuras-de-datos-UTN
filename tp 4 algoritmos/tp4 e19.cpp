#include <iostream>
using namespace std ;

int main ()
{
    int a,b,c;
    //ingresamos los numeros
    printf ("Ingrese primer numero : ");
    scanf ("%d",&a);
    printf ("Ingrese segundo numero : " );
    scanf ("%d",&b);
    printf ("Ingrese tercer numero : ");
    scanf ("%d",&c);

    if(a>b && a<c || a<b && a>c )
        printf ("el numero intermedio es %d \n",a);
    else if(b>a && b<c || b<a && b>c)
        printf ("el numero intermedio es %d \n",b);
    else if(c>a && c<b || c<a && c>b)
        printf ("el numero intermedio es %d \n",c);
    else
        printf ("no existe numero intermedio \n");
   system ("pause");
   return 0; 
}
