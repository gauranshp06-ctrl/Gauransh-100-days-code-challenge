Q37-
  #include <stdio.h>

int main()
{
    int a, b, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        max = a;
    else
        max = b;

    lcm = max;

    while(lcm % a != 0 || lcm % b != 0)
    {
        lcm++;
    }

    printf("%d", lcm);

    return 0;
}

Q38-
  #include <stdio.h>

int main()
{
    int n, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    printf("%d", sum);

    return 0;
}
