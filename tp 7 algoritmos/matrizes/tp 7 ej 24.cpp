#include <iostream>

int main()
{
	int m[10][10];
	for (int i=0;i <=9;i++)
	{
		for (int j=0;j <=9;j++)
		{
			if (j==i)
			{
				m[i][j]=1;
			}
		   else
		   {
		   		m[i][j]=0;
		   }
		}
	}
	for (int i=0;i <=9;i++)
	{
		for (int j=0;j <=9;j++)
		{
		 printf ("%d ",m[i][j]);
		}
		printf ("\n");
	}	
system ("pause");
return 0;
}
