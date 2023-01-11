#include<stdio.h>
void main()
{
    int a[100], num, i, j, temp;
    printf("\nenter the no of elements : ");
    scanf("%d", &num);
    for (i=0; i<num; i++)
    {
        printf("\nEnter the array elements : ");
        scanf("%d", &a[i]);
    }
    for  (i=0; i<num-1; i++)
    {
        for (j=0; j<num-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Array in Ascending Order :\n");
    for (i=0; i<num; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
    printf("Array in Descending Order :\n");
    for (i=num-1; i>=0; i--)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
}