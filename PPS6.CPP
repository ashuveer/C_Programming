/* Statement :- Print simple intrest & display result upto 2 decimal
   Programmar:- Ashutosh Kumar
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 float p,r,t;
 clrscr();
 //Taking input from the user
 printf("Enter Principle amount=");
 scanf("%f",&p);
 printf("\nEnter Intrest Rate=");
 scanf("%f",&r);
 printf("\nEnter Time periods=");
 scanf("%f",&t);
 //Display simple interst result
 printf("\nSimple Interst =%.2f",(p*r*t)/100);
 getch();

}