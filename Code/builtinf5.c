#include <stdio.h>
#include <string.h>
//strrev()-->reverses the string//
int main()
{
	char str[50]="Shashank Tripathi";
	printf("Given String is %s\n", str);
	printf("Reversed String is %s", strrev(str));
	return 0;
}