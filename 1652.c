#include <stdio.h>

char map[110][110];
int N;
int main(void) {
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", map + i);
    }

    int hor = 0;
    for (int i = 0; i < N; i++) {
        int cnt = 0;

        for (int j = 0; j < N; j++) {
            if (map[i][j] == '.') {
                cnt++;
            }
            else {
                if (cnt >= 2) hor++;
                cnt = 0;
            }
        }

        if (cnt >= 2) hor++;
    }

    int ver = 0;
    for (int j = 0; j < N; j++) {
        int cnt = 0;

        for (int i = 0; i < N; i++) {
            if (map[i][j] == '.') {
                cnt++;
            }
            else {
                if (cnt >= 2) ver++;
                cnt = 0;
            }
        }

        if (cnt >= 2) ver++;
    }

    printf("%d %d", hor, ver);

    return 0;
}