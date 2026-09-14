#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, SI, CI;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &p, &r, &t);

    SI = (p * r * t) / 100;
    CI = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest=%.0f\n", SI);
    printf("Compound Interest=%.2f", CI);

    return 0;
}


#include <stdio.h>

int main()
{
    int total, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &total);
    hours = total / 3600;
    total = total % 3600;

    minutes = total / 60;
    seconds = total % 60;

    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
}
