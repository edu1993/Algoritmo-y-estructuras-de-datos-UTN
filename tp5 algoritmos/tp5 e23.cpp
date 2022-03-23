#include <iostream>

using namespace std;

int main ()
{
	int hs, m, s;

for (hs=0; hs < 24; hs = hs + 1) 
{
	
	for (m=0; m < 60;  m= m + 1) 
	{
		
		for (s=0; s < 60; s = s + 1) 
		{
			printf ("%d: %d: %d \n",hs,m,s);
			system ("cls");	
		}
	}
	
	
}	
  
system ("pause");
return 0;


}

