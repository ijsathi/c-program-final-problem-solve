#include <stdio.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int t = 0; t < test_case; t++)
    {
        long long int m;
        int a, b, c;
        scanf("%lld %d%d%d", &m, &a, &b, &c);
        long long int abc = a * b * c;
        if (abc == 0)
        {
            if (m == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
        }
        else if (m % abc == 0)
        {
            printf("%lld\n", m / abc);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}