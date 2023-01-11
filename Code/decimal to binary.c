#include <stdio.h>
int convert();
int main()
{
	int n;
	printf("\nEnter the Decimal No. ");
	scanf("%d", &n);
	convert(n);
	return 0;
}

int convert(int n)
{
	int a[10], i;
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
    	n=n/2;
	}
	printf("\nBinary of Given Number is = ");
  	for(i=i-1;i>=0;i--)
  	{
    	printf("%d",a[i]);
  	}
}