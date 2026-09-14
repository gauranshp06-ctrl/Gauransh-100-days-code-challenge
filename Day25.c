Q49-
  #include <stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        for(j = i; j <= 5; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Q50-
  #include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j < i; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= 6 - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
