#include <stdio.h>

void print_form(int n, int m, char c)
{
    int times = m;
    for (int i = 0; i < n; i++)
    {
        if (times <= (m + n - 1))
        {
            for (int j = 0; j < times; j++)
            {
                printf("%c ", c);
            }
            times++;
        }

        printf("\n");
    }
}

int main()
{
    char c;
    int n, m;
    scanf("%d %d", &n, &m);
    scanf("%c", &c);
    print_form(n, m, c);
    return 0;
}