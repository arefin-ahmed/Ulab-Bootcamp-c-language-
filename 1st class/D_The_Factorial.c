#include <stdio.h>

int main()
{
    int n, i, fact = 1;

    scanf("%d", &n);

    for (i = 1; fact < n; i++)
    {
        fact = fact * i;
    }

    if (fact == n)
    {
        printf("%d", i - 1);
    }

    else
    {
        printf("No factorial number");
    }
    return 0;
}