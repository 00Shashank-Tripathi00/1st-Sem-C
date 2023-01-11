#include<stdio.h>
//----------------------------------------------------Function-1-----------------------------------------------//
void Swap()
{
    int a, b, temp;
    printf("\nEnter the Frist No.:");
    scanf("%d", &a);
    printf("\nEnter the Second No.:");
    scanf("%d", &b);
    printf("\nNumbers Before Swap are - %d, %d.", a, b);
    //----------SWAP---------------//
    temp=a;
    a=b;
    b=temp;
    printf("\nNumbers After Swap are - %d, %d.", a, b);
}
//----------------------------------------------------Function-2-----------------------------------------------//
void NOR(int g, int h)
{
    if (g==0 && h==0)
    {
        printf("\nYour Output is One (1)");
    }
    else
    {
        printf("\nYour output is Zero (0)");
    }
}
//----------------------------------------------------Function-3-----------------------------------------------//
void AND(int p, int q)
{
    if (p==1 && q==1)
    {
        printf("\nYour Output is One (1)");
    }
    else
    {
        printf("\nYour output is Zero (0)");
    }
}
//------------------------------------------------------MAIN()-------------------------------------------------//
void main()
{
    printf("Hello Everyone, Welcome to this multi-function program and you can perform multiple actions here.......");
    printf("\n\nFrist is Number Swap");
    Swap();
    printf("\nThank You for using Number Swap");
    printf("\n\n\nNow We have logic Gates....\nIf you want to use AND gate then Enter 'A' and if you want to use NOR gate then Enter 'N' : ");
    char s;
    int e, f, c, d;
    scanf("%d", &s);
    if (s=='A')
    {
        printf("\nEnter The value of 1st Input and 2nd Input respectively : ");
        scanf("%d", &e);
        scanf("%d", &f);
        AND(e, f);
    }
    else
    {
        printf("\nEnter The value of 1st Input and 2nd Input respectively : ");
        scanf("%d,%d", &c, &d);
        NOR(c, d);
    }
}