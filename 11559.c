#include <stdio.h>

char map[14][8];
char backup[14][8];
int N = 12;
int M = 6;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int acc = 0;
char current;
int count = 0;

void back() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            backup[i][j] = map[i][j];
}

void restore() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            map[i][j] = backup[i][j];
}

void fall() {
    for (int j = 0; j < M; j++) {
        for (int i = N - 1; i >= 0; i--) {
            if (map[i][j] != '.') {
                int h = i + 1;
                while (h < N && map[h][j] == '.') {
                    map[h][j] = map[h - 1][j];
                    map[h - 1][j] = '.';
                    h++;
                }
            }
        }
    }
}

int range(int x, int y) {
    return 0 <= x && x < N && 0 <= y && y < M;
}

void dfs(int x, int y) {
    map[x][y] = '.';

    count++;

    for (int k = 0; k < 4; k++) {
        int xx = x + dx[k];
        int yy = y + dy[k];

        if (!range(xx, yy) || map[xx][yy] != current) continue;

        dfs(xx, yy);
    }
}

/*
......
......
......
......
......
......
......
......
.Y....
.YG...
.RYG..
RRYGG.
*/

int go() {
    int popped = 0;

    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j < M; j++) {
            if (map[i][j] == '.') continue;

            back();
            current = map[i][j];
            count = 0;
            dfs(i, j);

            if (count >= 4) {
                popped = 1;
            } else {
                restore();
            }
        }
    }

    return popped;
}

int main(void) {
    for (int i = 0; i < N; i++) {
        scanf("%s", map[i]);
    }

    // (11, 0)
    int ans = 0;

    while (1) {
        if (go()) {
            fall();
            ans++;
        } else {
            break;
        }
    }

    printf("%d", ans);
    return 0;
}
