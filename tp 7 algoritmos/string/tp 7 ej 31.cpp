#include <iostream>
#include <time.h>
#include <stdlib.h>

int main()
{
   srand(time(NULL));
char v[5];
int max=231525,n=0;
for(int g=1;g <= max;g++)
{

	for(int i=0;i <= 4;i++)
	{
	    v[i]=('A'+rand()%('Z'-'B'+1));	
		if(i%2!=0)
		{
		 if(v[i]=='A'||v[i]=='E'||v[i]=='I'||v[i]=='O'||v[i]=='U') 
		 {
		   
		 }	
		 else
		 {
		 	i--;
			 }	
		}
	    else
	    {
	    	
	       
	       
	       if(v[i]=='A'||v[i]=='E'||v[i]=='I'||v[i]=='O'||v[i]=='U') i--;
		}
       
	}
	puts(v);
      
	}	
system ("pause");
return 0;
}
