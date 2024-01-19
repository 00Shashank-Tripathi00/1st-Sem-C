#include <stdio.h>
void main()
{
	char a;
	printf("Enter the Character\n");
	scanf("%c", &a);
	if (a>=97&&a<=122)
	{
		printf("Small Letters");
	}
	else if (a>=65&&a<=90)
	{
		printf("Capital Letters");
	}
	else if (a>=48&&a<=57)
	{
		printf("Numbers");
	}
	else if (a>=0&&a<=47)
	{
		printf("Special Symbols");
	}
	else
	{
		printf("Special Symbols");
	}


}