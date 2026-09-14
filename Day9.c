Q17-
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, r1, r2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);

        printf("Roots are real and different: %.0f, %.0f", r1, r2);
    }
    else if (D == 0)
    {
        r1 = -b / (2 * a);

        printf("Roots are real and same: %.0f", r1);
    }
    else
    {
        printf("Roots are complex");
    }

    return 0;
}

Q18-
  #include <stdio.h>

int main()
{
    int percentage;

    printf("Enter percentage: ");
    scanf("%d", &percentage);

    if (percentage >= 90)
    {
        printf("Grade A");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");
    }
    else if (percentage >= 60)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}


