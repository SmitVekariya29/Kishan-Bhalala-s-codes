#include<stdio.h>
#include<conio.h>
void main()                //odd number sum

{ int i,n,sum=0;
  clrscr();
  printf("enter the limit = ");
  scanf("%d",&n);
    for(i=1; i<=n; i=i+2)
    { sum=sum+i;
     printf("%d\t",i);
    }
     printf("\n total sum is odd number = %d",sum);
getch();

}

