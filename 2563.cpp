#include <stdio.h>

bool grid[110][110];
int main(void) {
    int n, x, y, cnt = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d%d", &x, &y);

        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= 10; j++) {
                if (!grid[x + i][y + j]) {
                    grid[x + i][y + j] = true;
                    cnt++;
                }
            }
        }
    }

    printf("%d", cnt);

    return 0;
}