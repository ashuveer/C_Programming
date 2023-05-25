/* Statement :-Print a number is palindrome or not
   Programmar:-Ashutosh Kumar
*/
#include<stdio.h>
#include<conio.h>
//Taking input form the user
void main()
{ int num,tem,l,rev=0;
  clrscr();
  printf("Enter a number for chacking it's a palindrome number or not\n");
  scanf("%d",&num);
//Display befor chacking
  printf("Entered number is %d",num);
//Operation
  tem=num;
  while(num>0)
  { l=num%10;
  rev=rev*10+l;
  num=num/10;
  }
//Display number is palindrome or not
  if(tem==rev)
  { printf("\nEntered number is a Palindrome number=%d",rev);
  }
  else
  {printf("\nEntered number is not a Palindrome number=%d",tem);
  }
  getch();
}

