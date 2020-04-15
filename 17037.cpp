#include <iostream>

int N, K;
int x_min = 1000, y_min = 1000, x_max = 0, y_max = 0;
int ans;
short mp[1010][1010];
int main(void) {
    std::cin >> N >> K;
    for (int i = 0; i < N; i++) {
        int x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;

        if (x_min > x1)
            x_min = x1;
        if (y_min > y1)
            y_min = y1;

        if (x_max < x2)
            x_max = x2;
        if (y_max < y2)
            y_max = y2;

        for (int j = x1; j < x2; j++)
            for (int k = y1; k < y2; k++)
                mp[j][k]++;
    }

    for (int i = x_min; i < x_max; i++)
        for (int j = y_min; j < y_max; j++)
            if (mp[i][j] == K)
                ans++;

    std::cout << ans;

    return 0;
}
