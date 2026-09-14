#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
    {
        printf("%d is even", n);
    }
    else
    {
        printf("%d is odd", n);
    }

    return 0;
}


#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n >= 0)
    {
        if(n == 0)
        {
            printf("Zero");
        }
        else
        {
            printf("Positive");
        }
    }
    else
    {
        printf("Negative");
    }

    return 0;
}
