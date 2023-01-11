#include <stdio.h>
#include <string.h>
//strcat()-->joins two strings//
int main()
{
	char str[100]="This is";
	char str2[50]="programming";
	strcat(str,str2);
	puts(str);
	return 0;
}