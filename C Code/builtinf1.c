#include <stdio.h>
#include <string.h>
//strlen()-->lists the length of the string//
int main()
{
	char str[20];
	int length;
	gets(str);
	length = strlen(str);
	printf("length = %d", length);
	return 0;
}