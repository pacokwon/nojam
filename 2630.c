#include <stdio.h>

int N;
int paper[130][130];
int W, B;

int isSameColor(int x, int y, int length) {
    int color = paper[x][y];

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (paper[x + i][y + j] != color)
                return 0;
        }
    }

    return 1;
}

void cut(int x, int y, int length) {
    if (isSameColor(x, y, length)) {
        if (paper[x][y]) B++;
        else W++;

        return;
    }

    int half = length / 2;
    cut(x, y, half);
    cut(x + half, y, half);
    cut(x, y + half, half);
    cut(x + half, y + half, half);
}

int main(void) {
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &paper[i][j]);
        }
    }

    cut(0, 0, N);

    printf("%d\n", W);
    printf("%d", B);

    return 0;
}
