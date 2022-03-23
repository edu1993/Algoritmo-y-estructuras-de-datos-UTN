#include <iostream>

using namespace std;

int main ()
{
int i,m1,m2,m3;
printf ("lista de a%cos bisiestos del mil al tresmil \n",164);
for (i=1000;i < 3000;i++)
{
	m1=i%4;
	m2=i%100;
	m3=i%400;
	if ( m1==0 )
	{
		if(m2 !=0)
		{
		
		printf ("%d \n",i);
		
		
		}
	}
	}	
  putchar ('\a');
system ("pause");
return 0;


}

