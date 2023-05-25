/* Statement :-Print exchange value without using third variable
   Programmar:-Ashutosh Kumar
*/
#include<stdio.h>
#include<conio.h>
//Taking input from the user
void main()
{ int x,y;
  clrscr();
  printf("Enter 1st integer value\n");
  scanf("%d",&x);
  printf("Enter 2nd integer value\n");
  scanf("%d",&y);
//Display value befor exchange
  printf("\nBefor exchange value");
  printf("\n1st integer value is %d",x);
  printf("\n2nd integer value is %d\n",y);
//Exchange value
  x=x+y;
  y=x-y;
  x=x-y;
//Display value after exchange
  printf("\nAfter exchange value");
  printf("\n1st integer value is %d",x);
  printf("\n2nd integer value is %d",y);
  getch();
}