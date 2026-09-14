Q25-
  #include <stdio.h>

int main()
{
    int a, b, result;
    char op;

    printf("Enter two numbers and operator: ");
    scanf("%d %d %c", &a, &b, &op);

    switch(op)
    {
        case '+':
            result = a + b;
            printf("%d", result);
            break;

        case '-':
            result = a - b;
            printf("%d", result);
            break;

        case '*':
            result = a * b;
            printf("%d", result);
            break;

        case '/':
            result = a / b;
            printf("%d", result);
            break;

        case '%':
            result = a % b;
            printf("%d", result);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}

Q26-
  #include <stdio.h>

int main()
{
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
