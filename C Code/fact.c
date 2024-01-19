#include <stdio.h>
int Fact(int x)
{
	int i, n=1;
	for(i=1; i<=x; i++)
	{
		n=n*i;
	}
	return n;
}

int main()
{
	int a, f;
	printf("\nEnter a Number: ");
	scanf("%d", &a);
	f=Fact(a);
	printf("\nThe Factorial of %d is %d.", a, f);
}