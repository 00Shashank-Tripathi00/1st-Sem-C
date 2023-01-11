#include <stdio.h>
void main ()
{
  int a, b, c, d, e;
  float Per;
  printf("Enter the Marks Of The Student");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  scanf("%d", &e);
  Per = ((a+b+c+d+e)/500)*100;
  printf("Percentage =  %f\n", Per);
 if(Per>=60)
  {
    printf("1st Division");
  }
 else if ((Per>=50)&&(Per<60))
  {
    printf("2nd Division");
  }
 else if ((Per>=40)&&(Per<50))
  {
    printf("3rd Division");
  }
 else (Per<40);
  printf("Fail");
}