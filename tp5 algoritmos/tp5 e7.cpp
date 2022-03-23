#include <iostream>

using namespace std;

int main ()
{
	
  int i,a;
for (i=40; i > 0; i--) {
	a=i%2;
	if (a==0)
	{
		a=(i + 8)%10;
		if (a != 0)
		{
			printf ("%d \n",i);
		}
	}
}
system ("pause");
return 0;


}


