#include<stdio.h>
//-------------Add()-------------//
Add()
{
	int a, b, c=0;
	printf("\nEnter 1st No. ");
	scanf("%d", &a);
	printf("\nEnter 2nd No. ");
	scanf("%d", &b);
	c=a+b;
	printf("\nThe Sum is %d",  c);
}

//------------Main()---------------//
main()
{
	printf("This Is The Function for Addition\nEnter Y to Call Add()");
	char x;
	scanf("%c", &x);
	if(x=='Y')
	{
		printf("\nCalling Add()");
		Add();
	}
}