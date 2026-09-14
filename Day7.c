#include <stdio.h>

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if(year % 400 == 0)
    {
        printf("Leap year");
    }
    else if(year % 100 == 0)
    {
        printf("Not a leap year");
    }
    else if(year % 4 == 0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }

    return 0;
}
