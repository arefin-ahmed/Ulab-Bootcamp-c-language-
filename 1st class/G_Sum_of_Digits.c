int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    sum += n % 10;
    n = n / 10;

    sum += n % 10;
    n = n / 10;

    sum += n % 10;
    n = n / 10;

    sum += n % 10;
    n = n / 10;

    sum += n % 10;

    printf("%d\n", sum);

    return 0;
}