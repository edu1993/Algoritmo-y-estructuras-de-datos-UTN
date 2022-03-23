#include <iostream> 
#include <string.h>




int main()
{
	int tam;
	char v[100],v2[100],esp =32,ret=8;;
	gets(v);
	
	
	
	tam=strlen(v)-1;
	for (int i=0,j=0;j <tam;i++)
	{
		if (v[i]!=esp)
		{
			v2[j]=v[i];
			j++;
		}

	}
	
	puts (v2);
system("pause");
return 0;
}
