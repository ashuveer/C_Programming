/* Statement :-Conver fahrenheit into celcius
   Programmar:-Ashutosh Kumar
*/
#include<stdio.h>
#include<conio.h>
void main()
//Taking input from the user
{ float f,c;
  clrscr();
  printf("Enter tempreture in fahrenheit:\n");
  scanf("%f",&f);
//Operation
  c=(f-32)*5/9;
//Displaing resul
  printf("After convert fahrenheit into celcius the tempreture is =%.2f",c);
  getch();
}

