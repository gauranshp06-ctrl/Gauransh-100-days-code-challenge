Q43-
  #include <stdio.h>

int main()
{
    int n, original, rem, fact, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        rem = n % 10;

        fact = 1;

        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == original)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not strong number");
    }

    return 0;
}

Q44-
  #include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i == 1)
            sum = sum + 1;
        else
            sum = sum + (float)(2 * i - 1) / (2 * i);

    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}
