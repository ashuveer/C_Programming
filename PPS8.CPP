/* Statement :-Print area & perimeter of a triangle using hero's formula
   Programmar:-Ashutosh Kumar
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()

//taking input from user
{
 float a,b,c,s,ar,pr;
 clrscr();
 printf("Enter three site of a triangle:\n");
 scanf("%f%f%f",&a,&b,&c);
 pr=a+b+c;
 s=(a+b+c)/2;
 ar=sqrt(s*(s-a)*(s-b)*(s-c));
//Displaing results
 printf("Peimeter of a triangle is %.2f",pr);
 printf("\nArea of a triangle is %.2f",ar);
 getch();
}