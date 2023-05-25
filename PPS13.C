/* Statement :-Print reverse number
   Programmar:-Ashutosh Kumar
*/
#include<stdio.h>
#include<conio.h>
//Taking input from the user
void main()
{
  int n,rev=0,tem,l;
  clrscr();
  printf("Enter a integer value/number\n");
  scanf("%d",&n);
//Display befor reverse
  printf("\nBefor Reverse\n");
  printf("Entered Integer value is %d\n",n);
//Operation for reverse number
  tem=n;
  while(n>0)
  { l=n%10;
    rev=rev*10+l;
    n=n/10;
  }
//Display after reverse
  printf("\nAfter Reverse\n");
  printf("Reverse value of %d is %d",tem,rev);
  getch();
}