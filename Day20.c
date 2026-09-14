Q39-
  #include <stdio.h>

int main()
{
    int n, rem, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        rem = n % 10;

        if(rem % 2 != 0)
        {
            product = product * rem;
        }

        n = n / 10;
    }

    printf("%d", product);

    return 0;
}

Q40-
  #include <stdio.h>

int main()
{
    int n, rem, rev = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        rem = n % 10;

        if(rem == 0)
            rem = 1;
        else
            rem = 0;

        rev = rev + rem * place;
        place = place * 10;
        n = n / 10;
    }

    printf("%d", rev);

    return 0;
}
