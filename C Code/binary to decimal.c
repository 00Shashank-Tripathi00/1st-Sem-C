#include <stdio.h>
#include <math.h>
int convert(long long);
int main()
{
	long long n;
	printf("\nEnter the Binary No. ");
	scanf("%lld", &n);
	printf("%lld in binary is %d in decimal", n, convert(n));
	return 0;
}

int convert(long long n)
{
	int dec=0, i=0, rem;
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		dec=dec+rem*pow(2,i);
		i++;
	}
	return dec;
}