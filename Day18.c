Q35-
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

Q36-
  #include <stdio.h>

int main()
{
    int a, b, rem;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while(b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }

    printf("%d", a);

    return 0;
}
