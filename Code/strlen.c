#include <stdio.h>
int main()
{
	char str[100];
	int i, len=0;
	printf("Enter a String : ");
	gets(str);
	for (i=0; str[i]!='\0'; i++)
	{
		len++;
	}
	printf("Length = %d", len);
	return 0;
}