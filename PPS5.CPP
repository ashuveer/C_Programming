/* Statement :- Print area & perimeter of square,rectangle & circle
   Programmar:- Ashutosh Kumar
*/
#include<stdio.h>
#include<conio.h>
void main()
//Taking input form the user
{ float a,l,r,b;
  clrscr();
  //for squar
  printf("Enter side of squar=");
  scanf("%f",&a);
  printf("\nArea of squar=%f",a*a);
  printf("\nPerimeter of squar=%f",4*a);
  //for rectangle
  printf("\n\nEnter length of ractangle=");
  scanf("%f",&l);
  printf("\nEnter width of ractangle=");
  scanf("%f",&b);
  printf("\nArea of ractangl =%f",l*b);
  printf("\nPerimeter of ractangle=%f",2*(l+b));
  //for circle
  printf("\n\Enter radius of circle=");
  scanf("%f",&r);
  printf("\nArea of circle=%f",3.14*r*r);
  printf("\nPerimeter of circle=%f",2*3.14*r);
  getch();
}

