#include<stdio.h>
//--------------------------------------------------------Function 1--------------------------------------------------//
int Marks_Calculator()
{
    printf("Enter the no. Of Subjects : ");
    int n;
    scanf("%d", &n);
    int m[n], i, sum=0, avg=0;
    
    for (i=0; i<=(n-1); i++)
    {
        printf("\nEnter marks of student in Subject %d: ", i+1);
        scanf("%d", &m[i]);
    }
    for (i=0; i<=(n-1); i++)
    {
        sum=sum+m[i];
    }
    avg=sum/n;
    printf("\nSum = %d and Average = %d", sum, avg);
    main();
    return 0;
}
//---------------------------------------------------------main()-----------------------------------------------------//
int main()
{
    printf("Welcome to Student Marks Calculator..\nEnter the Marks of One Student at a time in front of respective subject number");
    printf("\nIf you want to continue then enter 'Y' and if not then enter 'N' - ");
    char s;
    scanf("%c", &s);
    if (s=='Y')
    {
        Marks_Calculator();
        printf("\nThank You....");
    }
    else
    {
        printf("\nThanks Bye.....");
    }
    return 0;
}