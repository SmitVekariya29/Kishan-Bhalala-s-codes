#include<stdio.h>
#include<conio.h>
void main()
{ int i,j,a=1;
  clrscr();
  for(i=1; i<=5; i++)
  {
    for(j=1; j<=i; j++)
    {
      if(a%2==1)
      {
	 printf("1 ");
      }
      else
      {
	 printf("0 ");
      }
      a++;
    }
     printf("\n");
  }
 getch();
}
