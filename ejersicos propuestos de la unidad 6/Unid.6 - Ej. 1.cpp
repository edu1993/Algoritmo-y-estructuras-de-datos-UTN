#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	char v[6]={'a','e','i','o','u'};
	for (int i=1;i <=7;i++ )
	{
		printf ("%c \n", v[rand()%5]);
	}
	system ("pause");
	return 0;
}
