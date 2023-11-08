#include <stdio.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int t = 0; t < test_case; t++)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n], c[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        // copy of a and sort it to get array b
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (b[j] > b[j + 1])
                {
                    int temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }
        // Calculate absolute difference and store it in array c
        for (int i = 0; i < n; i++)
        {
            c[i] = a[i] > b[i] ? a[i] - b[i] : b[i] - a[i];
        }
        // outpu array c
        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}
