#include<stdio.h>
void main()
{
  int i,j;

  i='A';
  while(i<='E')
  {
       j='A';
       while(j<=i)
       {
            printf("%c ",j);
            j++;
       }
    
       printf("\n");
       i++;
      
  }

}