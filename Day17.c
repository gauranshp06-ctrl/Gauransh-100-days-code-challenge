Q33-
  #include <stdio.h>

int main()
{
    int n, original, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if(sum == original)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}

Q34-
  #include <stdio.h>

int main()
{
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }

    return 0;
}
