#include <stdio.h>
int main()
{
    int a;
    float b;

    scanf("%d", &a);

    if (a % 2 == 0)
    {
        b = a / 4.0;
        printf("%.1f", b);
    }

    else
    {
        b = a / 4.0;
        printf("%.2f", b);
    }

    return 0;
}