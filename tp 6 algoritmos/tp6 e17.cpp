#include <iostream>

main()
{
	int n,scn,scl;
	char c;
	printf ("ingrese una letra \n");
	 scl=scanf("%c",&c);
	printf ("ingrese un numero \n");
	scn=scanf ("%d",&n);
	printf ("valor del scanf \npara el numero:%d\npara la letra:%d\n",scn,scl);
	system ("pause");
	return 0;
}
