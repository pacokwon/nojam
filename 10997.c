#include <stdio.h>

int N;
int star[400][400];

void fill(int x, int y, int width, int height) {
    if (width == 1) {
        star[x][y] = '*';
        star[x + 1][y] = '*';
        star[x + 2][y] = '*';

        return;
    }

    for (int i = 0; i < width; i++) {
        star[x + height - 1][y - i] = '*';
        star[x][y - i] = '*';
    }

    for (int i = 0; i < height; i++) {
        star[x + i][y - width + 1] = '*';

        if (i != 1) star[x + i][y] = '*';
    }

    star[x + 2][y - 1] = '*';
    fill(x + 2, y - 2, width - 4, height - 4);
}

int main() {
    scanf("%d", &N);

    if (N == 1) {
        printf("*");
        return 0;
    }

    int width = 4 * N - 3;
    int height = 4 * N - 1;
    for (int i = 0; i < height; i++) for (int j = 0; j < width; j++) star[i][j] = ' ';

    fill(0, width - 1, width, height);

    for (int i = 0; i < height; i++) {
        if (i == 1) {
            printf("%c", star[i][0]);
        } else {
            for (int j = 0; j < width; j++)
                printf("%c", star[i][j]);
        }
        if (i != height - 1) printf("\n");
    }

    return 0;
}
