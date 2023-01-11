#include <stdio.h>
int main()
{
	char str[100], rev[100];
	int i, j, count;
	printf("Enter A String : ");
	scanf("%s", str);
	printf("String before reversal : %s\n", str);
	while(str[count]!='\0')
	{
		count++;
	}
	j=count-1;
	for (i=0; i<count; i++)
	{
		rev[i]=str[j];
		j--;
	}
	printf("String after reversal : %s\n", rev);
	return 0;
}