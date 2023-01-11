//demo of call by value//
#include<stdio.h>
int display();
int main()
{
	int i;
	int marks[]={55,  56, 78, 79, 80};
	for (i=0; i<=6; i++)
	{
		display(marks[i]);
	}
}
int display(int m)
{
	printf("%d", m);
}



#include<stdio.h>
int display();
int main()
{
	int i;
	int marks[]={55,  56, 78, 79, 80};
	for (i=0; i<=6; i++)
	{
		display(&marks[i]);
	}
}
int display(int *m)
{
	printf("%d", *m);
}
