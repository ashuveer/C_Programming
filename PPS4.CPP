/* Statement :- Print addition of two integer value
   Programmar:- Ashutosh Kumar
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,z;
 clrscr();
 //Taking integer value from user.
 printf("Enter 1st Integer value:");
 scanf("%d",&x);
 printf("\nEnter 2nd Integer value:");
 scanf("%d",&y);
 z=x+y;
 //Displaying Addtion of integers.
 printf("Addition of X & Y =%d",z);
 getch();
}
