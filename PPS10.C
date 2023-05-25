/* Statement :-Print greatest number in three number.
   Programmar:-Ashutosh Kumar
*/
#include<stdio.h>
#include<conio.h>
void main()
//Taking input from user
{ float x,y,z,max;
  clrscr();
  printf("Enter 1st Number:");
  scanf("%f",x);
  printf("Enter 2nd Number:");
  scanf("%f",y);
  printf("Enter 3rd Number:");
  scanf("%f",z);
//operation
  max=(x>y)?(x>z)?x:z:(y>z)?y:z;
//Displaing the results
  printf("Greatest number out of three is %.2f",max);
  getch();
}
