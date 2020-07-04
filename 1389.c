#include <stdio.h>
#define INF 1e9

int dp[110][110][110];
int E[110][110];
int N, M;

int min(int a, int b) {
    return a > b ? b : a;
}

int main(void) {
    scanf("%d%d", &N, &M);

    for (int i = 0; i <= N; i++)
        for (int j = 0; j <= N; j++)
            for (int k = 0; k <= N; k++)
                dp[i][j][k] = INF;


    int u, v;
    for (int i = 0; i < M; i++) {
        scanf("%d%d", &u, &v);
        E[u][v] = E[v][u] = 1;
        dp[u][v][0] = dp[v][u][0] = 1;
    }

    for (int k = 1; k <= N; k++)
        for (int i = 1; i <= N; i++)
            for (int j = 1; j <= N; j++)
                dp[i][j][k] = min(dp[i][j][k - 1], dp[i][k][k - 1] + dp[k][j][k - 1]);

    int person = -1;
    int ans = INF;
    for (int i = 1; i <= N; i++) {
        int sum = 0;

        for (int j = 1; j <= N; j++) {
            if (i == j) continue;
            sum += dp[i][j][N];
        }

        if (sum < ans) {
            person = i;
            ans = sum;
        }
    }

    printf("%d", person);

    return 0;
}
