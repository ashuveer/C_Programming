/* Statement :-Print the quatient and remainder of any integer value
   Programmar:-Ashutosh Kumar
*/
#include<stdio.h>
#include<conio.h>
void main()
//taking input from the user
{
 int x,y;
 clrscr();
 printf("Enter the number/divident=");
 scanf("%d",&x);
 printf("\nEnter the Divider=");
 scanf("%d",&y);
 // Displaying result
 printf("Quotient of Number is =%d",x/y);
 printf("\nRemainder of Number is =%d",x%y);
 getch();
}

