#include <cstdio>

bool prime[1001];

int main()
{
    int n, k;
    int cnt = 0;
    scanf("%d %d", &n, &k);
    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            if (!prime[j])
            {
                prime[j] = true;
                if (++cnt == k)
                {
                    printf("%d\n", j);
                    break;
                }
            }
        }
    }
    return 0;
}