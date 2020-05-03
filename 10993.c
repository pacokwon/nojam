#include <stdio.h>

int N;
char star[1024][2048];

int pow(int n) {
    if (n == 0) return 1;
    return pow(n - 1) * 2;
}

void drawStar(int x, int y, int level) {
    if (level == 1) {
        star[x][y] = '*';
        return;
    } else if (level == 2) {
        star[x][y] = '*';

        star[x - 1][y - 1] = '*';
        star[x - 1][y + 0] = '*';
        star[x - 1][y + 1] = '*';

        star[x - 2][y - 2] = '*';
        star[x - 2][y - 1] = '*';
        star[x - 2][y + 0] = '*';
        star[x - 2][y + 1] = '*';
        star[x - 2][y + 2] = '*';

        return;
    }

    int height = pow(level) - 1;
    int neg = level % 2 ? 1 : -1;
    for (int i = 0; i < height; i++) {
        star[x + neg * i][y + i] = '*';
        star[x + neg * i][y - i] = '*';

        if (i == height - 1) {
            for (int j = -i; j <= i; j++) {
                star[x + neg * i][y + j] = '*';
            }
        }
    }


    drawStar(x + neg * (height - 2), y, level - 1);
}

int main() {
    scanf("%d", &N);
    int height = pow(N) - 1;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < 2 * height - 1; j++) {
            star[i][j] = ' ';
        }
    }

    drawStar(N % 2 ? 0 : height - 1, height - 1, N);

    for (int i = 0; i < height; i++) {
        if (N % 2) {
            for (int j = 0; j < height + i; j++) {
                printf("%c", star[i][j]);
            }
        } else {
            for (int j = 0; j < 2 * height - 1 - i; j++) {
                printf("%c", star[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
