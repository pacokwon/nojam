#include <stdio.h>

char board[50][50];
int main(void) {
    int W, H;
    scanf("%d%d", &H, &W);

    for (int i = 0; i < H; i++)
        scanf("%s", board[i]);

    int ans = 2500;

    for (int k = 0; k <= H - 8; k++) {
        for (int l = 0; l <= W - 8; l++) {
            int black = 0, white = 0;
            for (int i = k; i < k + 8; i++) {
                for (int j = l; j < l + 8; j++) {
                    if ((i + j - k - l) % 2 == 0) {
                        if (board[i][j] == 'W') black++;
                        else white++;
                    } else {
                        if (board[i][j] == 'B') black++;
                        else white++;
                    }
                }
            }

            int smaller = black < white ? black : white;
            if (ans > smaller)
                ans = smaller;

        }
    }

    printf("%d", ans);

    return 0;
}
