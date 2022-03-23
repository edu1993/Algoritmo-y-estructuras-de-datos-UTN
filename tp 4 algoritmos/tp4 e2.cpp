public static int Main()
	{
		int n1;
		int n2;
		int r;
		int s;

		System.out.print("ingrese un numero, luego precione enter e ingrese otro \n ");
		String tempVar = ConsoleInput.scanfRead();
		if (tempVar != null)
		{
			n1 = Integer.parseInt(tempVar);
		}
		String tempVar2 = ConsoleInput.scanfRead();
		if (tempVar2 != null)
		{
			n2 = Integer.parseInt(tempVar2);
		}
		r = n1 - n2;
		s = n1 + n2;
		System.out.printf("los numeros ingreasados son %d %d, la suma de los mismos es %d, y su resta en el orden ingresado es %d",n1,n2,s,r);


		system("pause");

		return 0;

	}