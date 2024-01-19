//Program To Print Strings//
#include <stdio.h>
void main()
{
	char name[]="Shashank";
	int i=0;
	while(name[i]!='\0')
	{
		printf("%c", name[i]);
		i++;
	}
}