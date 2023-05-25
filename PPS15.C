/* Statement :-Check number is armstrong or not
   Programmar:-Ashutosh Kumar
*/
#include<stdio.h>
#include<conio.h>
//Taking input form the user
void main()
{ int num,tem,tem2=0,l;
  clrscr();
  printf("Enter a number for checking it's a armstrong number or not\n");
  scanf("%d",&num);
//Display number
  printf("Entered number is %d\n",num);
//Operations
  tem=num;
  while(num>0)
  {  l=num%10;
  tem2=tem2+(l*l*l);
   num=num/10;
  }
//Display number is armstrong or not
  if(tem==tem2)
  {
   printf("\nEntered number is a armstrong number=%d",tem2);
  }
  else
  {
   printf("\nEntered number is not a armstrong number=%d",tem);
  }
  getch();
}