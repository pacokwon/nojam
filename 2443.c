#include <stdio.h>

int N;
int main(void)
{
    scanf("%d", &N);

    for (int i = N; i >= 1; i--)
    {
        for (int j = i; j < N; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
