#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int l,b,A,P;
printf("Enter l ");
scanf("%d",&l);
printf("Enter b ");
scanf("%d",&b);
A=l*b;
P=2*(l+b);
printf("\n Area is %d",A);
printf("\n Periment is %d",P);
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float r,A,C;
printf("Enter r ");
scanf("%d",&r);
A=3.14*r*r;
C=2*3.14*r;
printf("Area is %.2f",A);
printf("\n Circumference is %.2f",C);
getch();
}
