Q41-
  #include <stdio.h>

int main()
{
    int n, first, last, digits = 1, temp, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    last = n % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    result = n - first * digits - last;
    result = result + last * digits + first;

    printf("%d", result);

    return 0;
}

Q42-
  #include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not perfect number");
    }

    return 0;
}
