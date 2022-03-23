#include <iostream>

using namespace std;

int main ()
{
	
  int i,a;
for (i=3; i < 100; i = i + 1) {
	
	a=(i + 7)%10;
	if (a==0)
	{
		printf ("%d \n",i);
	}
}
system ("pause");
return 0;


}


