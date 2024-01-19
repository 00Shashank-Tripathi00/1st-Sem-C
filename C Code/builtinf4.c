#include <stdio.h>
#include <string.h>
//strcmp()-->comparisionn//
int main()
{
	char str[]="Jerry";
	char str2[]="Ferry";
	int result;
	result = strcmp(str, str2);
	printf("Result = %d", result);
	return 0;
}