#include <stdio.h>
#include <conio.h>
void main()
{
    float C, F;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);
    F = (C * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %.2f", F);
    getch();
}


#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b,c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d", b);
    getch();
}

