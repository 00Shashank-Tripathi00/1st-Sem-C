#include <stdio.h>
int Prime_No_Finder(int n);
int main()
{
	int a, b, i, flag;
	printf("\nEnter the Numbers: ");
	scanf("%d %d",  &a, &b);
	printf("\nPrime Numbers Are -->  ");
	for (i=a+1; i<b; i++)
	{
		flag=Prime_No_Finder(i);
		if(flag==1)
			printf("%d, ", i);
	}
	return 0;
}
int Prime_No_Finder(int n)
{
	int j, flag=1;
	for (j=2; j<=n/2; ++j)
	{
		if(n%j==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}