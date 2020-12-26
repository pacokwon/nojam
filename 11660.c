#include <stdio.h>

int table[1030][1030];
int dp[1030][1030];
int N, M;

int main(void) {
    scanf("%d%d", &N, &M);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            scanf("%d", &table[i][j]);
            dp[i + 1][j + 1] = table[i][j] + dp[i][j + 1] + dp[i + 1][j] - dp[i][j];
        }

/*     for (int i = 0; i < N; i++) { */
/*         for (int j = 0; j < N; j++) { */
/*             printf("%3d", dp[i + 1][j + 1]); */
/*         } */
/*         printf("\n"); */
/*     } */

    int x1, x2, y1, y2;
    for (int i = 0; i < M; i++) {
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

        /* printf("%d %d %d %d\n", dp[x2 + 1][y2 + 1], dp[x1][y2 + 1], dp[x2 + 1][y1], dp[x1][y1]); */

        printf("%d\n", dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1]);
    }

    return 0;
}
