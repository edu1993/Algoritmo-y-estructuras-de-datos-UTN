#include <iostream>

int main()
{
{
 int x=0,y=1,FIB[100];

  x=0;
  y=1;
  FIB[0]=x;
  FIB[1]=y;
   
 
  for (int i=2;i<=14;i++)
  {
      FIB[i]=x+y;
      x=y;
      y=FIB[i];
  }
 for (int i=0; i <= 14;i++) printf ("%d \n",FIB[i]);
 
  system("PAUSE");     
  return 0;
}
}
