#include <stdio.h>
#include <string.h>

int N, M;
int map[310][310];
int mat[310][310];
int copy[310][310];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void melt() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            mat[i][j] = 0;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            if (!map[i][j]) continue;
            for (int k = 0; k < 4; k++)
                if (!map[i + dx[k]][j + dy[k]])
                    mat[i][j]++;
        }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            map[i][j] = map[i][j] > mat[i][j] ? map[i][j] - mat[i][j] : 0;

}

int range(int x, int y) {
    return 0 <= x && x < N && 0 <= y && y < M && copy[x][y] > 0;
}

void dfs(int x, int y) {
    copy[x][y] = -1;

    for (int k = 0; k < 4; k++) {
        int xx = x + dx[k];
        int yy = y + dy[k];

        if (!range(xx, yy)) continue;

        dfs(xx, yy);
    }
}

int count() {
    int cnt = 0;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            copy[i][j] = map[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (copy[i][j] > 0) {
                cnt++;
                dfs(i, j);
            }

    return cnt;
}

int main(void) {
    scanf("%d%d", &N, &M);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &map[i][j]);

    int years = 0;
    while (1) {
        int cnt = count();
        if (cnt >= 2) break;
        else if (cnt == 0) {
            years = 0;
            break;
        }
        melt();
        years++;
    }

    printf("%d", years);

    return 0;
}
