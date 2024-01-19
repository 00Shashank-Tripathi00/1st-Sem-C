#include <stdio.h>
int main()
{
	int i, j, a[5]={1,2,9,7,11};
	int x;
	printf("Enter the Element That You Want to Search : ");
	scanf("%d", &x);
	for(i=0; i<5; i++)
	{
		if(a[i]==x)
		{
			printf("\nElement Found at Position : %d", i+1);
			break;
		}
		else
		{
			printf("\nError 404 : Element Not Found at Position : %d", i+1);
		}
	}
	return 0;
}