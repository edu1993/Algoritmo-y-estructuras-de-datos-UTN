#include <iostream>

main()
{
	int n,vp[20],vn[20],p=1,neg=1;
	for (int i=1;i<=20;i++)
	{
		
		scanf("%d",&n);
		if (n==0)
		{
			break;
		}
       if (n>0)
       {
       	vp[p]=n;
       	p++;
       	
	   }
	 else 
	 {
	 	vn[neg]=n;
	 	neg++;
	 }
	}
	neg--;
	p--;
	printf ("vector con positivos: \n");
	for (int i=1;i <= p;i++)
	{
		printf ("%d \t",vp[i]);
	}
	printf ("\nvector con negativos :\n");
	for (int i=1;i <= neg;i++)
	{
		printf ("%d \t",vn[i]);
	}
	printf ("\n");
	system ("pause");
	return 0;
	
}
