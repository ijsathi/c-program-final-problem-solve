#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 != 0)
    {
        int line, space, star;
        star = 1;
        line = (n - 1) / 2 + 6;
        space = line - 1;
        for (int i = 0; i < line; i++)
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= star; j++)
            {
                printf("*");
            }
            // line sesh
            star = star + 2;
            space--;
            printf("\n");
        }

        // tree er root
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
// alhamdulillah 