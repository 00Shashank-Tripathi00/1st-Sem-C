#include <stdio.h>
#include <string.h>
//strcpy()-->copies//
int main()
{
	char str[20]="C Program";
	char str2[20];
	strcpy(str2, str);
	puts(str2);
	return 0;
}