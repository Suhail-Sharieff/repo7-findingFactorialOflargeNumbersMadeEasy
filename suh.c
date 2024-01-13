

#include <stdio.h>

int main()
{
    int t, n, a[200000], i, j, k, l, m;
    printf("enter the number of times u wanna calculate the factorial of the number \n");
    scanf("%d", &t);
    while (t--)
    {
        printf("enter the number whose factorial u wanna find : \n");
        scanf("%d", &n);
        m = 1;
        a[0] = 1;
        for (j = 2; j <= n; j++)
        {
            l = 0;
            for (k = 0; k < m; k++)
            {
                a[k] = a[k] * j + l;
                l = a[k] / 10;
                a[k] = a[k] % 10;
            }
            while (l)
            {
                a[k] = l % 10;
                k++;
                m++;
                l = l / 10;
            }
        }
        printf("the factorail of %d is ", n);
        for (i = m - 1; i >= 0; i--)
            printf("%d", a[i]);

        printf("\n");
    }
    return 0;
}
