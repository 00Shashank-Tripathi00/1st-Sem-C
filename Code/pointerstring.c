#include <stdio.h>
void main()
{
	char name[]="Henry";
	char *ptr;
	ptr=name;
	while(*ptr!='\0')
	{
		printf("%c", *ptr);
		ptr++;
	}
}