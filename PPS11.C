/* Statement :-Print Exchange value using temprory variable
   Programmar:-Ashutosh Kumar
*/
#include<stdio.h>
#include<conio.h>
//taking input from the user
void main()
{
 int x,y,z;
 clrscr();
 printf("Enter 1st integer value:\n");
 scanf("%d",&x);
 printf("Enter 2nd integer value:\n");
 scanf("%d",&y);
 //Display integer value befor exchange
 printf("\nBefor Exchang variable\n");
 printf("1st integer value is=%d",x);
 printf("\n2nd integer value is=%d\n",y);
 //Exchange variable using temporary variable
 z=x;
 x=y;
 y=z;
 //Display variable after exchange
 printf("\nAfter Exchange variable");
 printf("\n1st integer value is =%d",x);
 printf("\n2nd integer value is =%d",y);
 getch();
}


