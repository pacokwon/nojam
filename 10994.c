#include <stdio.h>

int N;
char star[500][500];

void fill(int x, int y, int len) {
    if (len == 1) {
        star[x][y] = '*';
        return;
    }

    for (int i = 0; i < len; i++) {
        star[x][y + i] = '*';
        star[x + i][y] = '*';
        star[x + len - 1][y + i] = '*';
        star[x + i][y + len - 1] = '*';
    }
}

int main() {
    scanf("%d", &N);

    for (int i = 0; i < 4 * N - 3; i++) {
        for (int j = 0; j < 4 * N - 3; j++) {
            star[i][j] = ' ';
        }
    }

    for (int i = 0; i < N; i++) {
        fill(2 * i, 2 * i, 4 * (N - i) - 3);
    }

    for (int i = 0; i < 4 * N - 3; i++) {
        for (int j = 0; j < 4 * N - 3; j++) {
            printf("%c", star[i][j]);
        }
        printf("\n");
    }

    return 0;
}
