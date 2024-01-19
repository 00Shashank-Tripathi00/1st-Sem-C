//-----------------Fact()-----------------//
#include <stdio.h>
int Fact(int val)
{
	int a, b=1;
	for (a=1; a<=val; a++)
	{
		b=b*a;
	}
	return b;
}
//-----------------Main()-----------------//
int main()
{
	int n, count, temp, rem, final_result, sum=0;
	printf("\nThis A Program to Check Weather a Number is Strong or Not.\nEnter A Number: ");
	scanf("%d", &n);
	temp=n;
	for(temp=n; n>0; n=n/10)
	{
		rem=n%10;
		final_result=Fact(rem);
		sum=sum+final_result;
	}
	if(sum==temp)
		printf("\nStrong Number\n");
	else
		printf("\nNot A Strong Number\n");
	return 0;
}