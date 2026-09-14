Q51-
  #include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        /* Print spaces */
        for(j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        /* Print numbers */
        for(j = 6 - i; j <= 5; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Q52-
  #include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        int stars;

        if(i == 1 || i == 5)
            stars = 1;
        else if(i == 2 || i == 4)
            stars = 3;
        else
            stars = 5;

        for(j = 1; j <= stars; j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}
