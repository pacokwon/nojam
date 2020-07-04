#include <stdio.h>

int R, C;
char map[25][25];
int check[30];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int ans;

int range(int x, int y) {
    return 0 <= x && x < R && 0 <= y && y < C && map[x][y] != '.';
}

void dfs(int x, int y, int cnt) {
    if (ans < cnt)
        ans = cnt;

    for (int k = 0; k < 4; k++) {
        int xx = x + dx[k];
        int yy = y + dy[k];

        if (!range(xx, yy) || check[map[xx][yy] - 'A'])
            continue;

        int tmp = map[xx][yy];

        check[map[xx][yy] - 'A'] = 1;
        map[xx][yy] = '.';
        dfs(xx, yy, cnt + 1);
        map[xx][yy] = tmp;
        check[map[xx][yy] - 'A'] = 0;
    }
}

int main(void) {
    scanf("%d%d", &R, &C);

    for (int i = 0; i < R; i++) {
        scanf("%s", map[i]);
    }

    check[map[0][0] - 'A'] = 1;
    map[0][0] = '.';
    dfs(0, 0, 1);

    printf("%d", ans);

    return 0;
}
