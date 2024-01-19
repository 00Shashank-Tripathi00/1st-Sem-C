#include <stdio.h>
void main()
{
	int i=3, *x;
	float j=1.5, *y;
	char k='c', *z;
	x=&i;
	y=&j;
	z=&k;
	printf("Orignal Address x = %u", x);
	printf("Orignal Address y = %u", y);
	printf("Orignal Address z = %u", z);
	x++;
	y++;
	z++;
	printf("New Address x = %u", x);
	printf("New Address y = %u", y);
	printf("New Address z = %u", z);
}



#include <stdio.h>
void main()
{
	int i=4, *j, *k;
	j=&i;
	j=j+1;
	j=j+9;
	k=j+3;
	printf("%d, %d", *j, *k);
}


#include <stdio.h>
void main()
{
	int num[]={24,34,12,44,36,17};
	int i;
	for (i=0; i<=5; i++)
	{
		printf("\nElements No. %d", i);
		printf("\nAddress = %u", &num[i]);
	}
}