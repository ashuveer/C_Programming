
/* Statement :- Print int,float & char value
   Programmar:- Ashutosh Kumar
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 float b;
 char c;
 clrscr();
 //Taking input from the user.
 printf("Enter a Character Value:\n");
 scanf("%c",&c);
 printf("Enter a Integer Value:\n");
 scanf("%d",&a);
 printf("Enter a Float Value:\n");
 scanf("%f",&b);
 //Displaying here.
 printf("\nCharacter Value is:%c",c);
 printf("\nInteger Value is:%d",a);
 printf("\nFloat Value is:%f",b);
 getch();
}