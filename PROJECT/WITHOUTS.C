#include<stdio.h>
#include<conio.h>
void main()
{ int a,b;          // swapping without third variable

  clrscr();
  printf("enter the value = \n");
  scanf("%d%d",&a,&b);

  a=a+b;       //10+20=30
  b=a-b;       //30-20=10
  a=a-b;       //30-10=20

  printf("swapping = %d\nswapping = %d",a,b);
  getch();

}
