#include <stdio.h>
void main()
{
	int arr[]={10, 20, 36, 72, 45, 36};
	int *j, *k;
	j=&arr[4];
	k=(arr+4);
	if (j==k)
	{
		printf("\nEqual");
	}
	else
	{
		printf("\nNot Equal");
	}
}