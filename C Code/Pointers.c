#include <stdio.h>
void main()
{
	int i=3,*j;
	j=&i;
	printf("\nAddress of i is %u", &i);
	printf("\nThe Value Of i is %d", i);
	printf("\nValue of i = %d", *(&i));
	printf("\n The Value Of J is %d", j);
}
