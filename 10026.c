#include <stdio.h>
#include <string.h>

char map[110][110];
char copy[110][110];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int N;

void dfs(int x, int y, char target) {
    if (!(0 <= x && x < N && 0 <= y && y < N))
        return;

    if (target != map[x][y])
        return;

    map[x][y] = 'A';
    for (int i = 0; i < 4; i++) {
        dfs(x + dx[i], y + dy[i], target);
    }
}

int valid(char target, char color) {
    if (color == 'A') return 0;

    if (target == 'B') {
        return target == color;
    } else {
        return color == 'R' || color == 'G';
    }
}

void dfsB(int x, int y, char target) {
    if (!(0 <= x && x < N && 0 <= y && y < N))
        return;

    if (!valid(target, copy[x][y]))
        return;

    copy[x][y] = 'A';
    for (int i = 0; i < 4; i++) {
        dfsB(x + dx[i], y + dy[i], target);
    }
}

int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", map[i]);
        strcpy(copy[i], map[i]);
    }

    int count = 0, bcount = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (map[i][j] != 'A') {
                dfs(i, j, map[i][j]);
                count++;
            }

            if (copy[i][j] != 'A') {
                dfsB(i, j, copy[i][j]);
                bcount++;
            }
        }
    }

    printf("%d %d", count, bcount);
    return 0;
}
