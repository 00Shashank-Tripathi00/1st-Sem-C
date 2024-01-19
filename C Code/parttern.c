#include <stdio.h>
int main()
{
	int i, j, rows;
	printf("Enter No. Of Rows");
	scanf("%d", &rows);
	for(i=1; i<=rows;  i++)
	{
		for(j=1;  j<=rows; j++)
		{
			printf("*");
		}
	printf("\n");
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int i, j, rows, col;
	printf("Enter No. Of Rows");
	scanf("%d", &rows);
	printf("Enter No. Of Columns");
	scanf("%d", &col);
	for(i=1; i<=rows;  i++)
	{
		for(j=1;  j<=col; j++)
		{
			printf("*");
		}
	printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i, j, rows;
	printf("Enter the ROws");
	scanf("%d",&rows);
	for(i=1; i<=rows; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
	printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i, j, rows;
	printf("Enter the ROws");
	scanf("%d",&rows);
	for(i=rows; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
	printf("\n");
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int i, j, rows;
	printf("Enter No. Of Rows");
	scanf("%d", &rows);
	for(i=1; i<=rows;  i++)
	{
		for(j=1;  j<=i; j++)
		{
			printf("%d", j);
		}
	printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i, j, rows;
	printf("Enter the ROws");
	scanf("%d",&rows);
	for(i=rows; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d", j);
		}
	printf("\n");
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int i, j, rows;
	printf("Enter No. Of Rows");
	scanf("%d", &rows);
	for(i=1; i<=rows;  i++)
	{
		for(j=1;  j<=i; j++)
		{
			if(j%2==1)
			printf("1");
			else
			printf("0");
		}
	printf("\n");
	}
	return 0;
}

#include <stdio.h>
int main() 
{
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   
   for(i=1; i<=rows; ++i, k=0)
   {
      for(space=1; space<=rows-i; ++space)
      {
         printf("  ");
      }
      while(k!=2*i-1)
      {
         printf("| ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}