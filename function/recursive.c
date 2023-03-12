#include<stdio.h>

	int fun(int n)
	{
		printf("inside function: %d\n",n);
		
		if(n<10)
		{
			fun(++n);
		}
		
		printf("After condition: %d\n",n);
	}
	
	void main()
	{
		fun(1);
	}
//recursive