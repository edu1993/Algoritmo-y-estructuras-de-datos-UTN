#include <iostream>

int main()
{
	int v[14],conta=0,contd =0;
	for (int i=0;i <= 14;i++)
	{
		scanf ("%d",&v[i]);
	}// carga los valores en el vector
	
	for (int i=0,j=1;j <= 14;i++,j++)
{
	  
	  if (v[i] <= v[j])
			  {
        		   	//acendente 
		 		 conta ++;
		  
	 			 }
	 if (v[i] >= v[j])
		  {
         				  	//decendente 
		  			contd ++;
		  
	  		}
	  
	  }
	  
	  
    if (conta==14)
  {
  	printf("acendente \n");
  }
   if (contd==14)
  {
  	printf("decendente \n");
  }
else 
{
	printf ("el vector se encuentra desordenado \n");
}

system ("pause");
return 0;
}
