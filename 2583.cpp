#include <algorithm>
#include <iostream>
#include <vector>

int M, N, R;
int paper[110][110];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int area;
std::vector<int> areas;

int range(int x, int y) {
    return 0 <= x && x < M && 0 <= y && y < N && !paper[x][y];
}

void dfs(int x, int y) {
    paper[x][y] = 2;
    area++;

    for (int k = 0; k < 4; k++) {
        int xx = x + dx[k];
        int yy = y + dy[k];

        if (!range(xx, yy)) continue;

        dfs(xx, yy);
    }
}

int main(void) {
    std::cin >> M >> N >> R;

    int x1, x2, y1, y2;
    for (int r = 0; r < R; r++) {
        std::cin >> y1 >> x1 >> y2 >> x2;

        for (int x = x1; x < x2; x++)
            for (int y = y1; y < y2; y++)
                paper[x][y] = 1;
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (!paper[i][j]) {
                area = 0;
                dfs(i, j);
                areas.push_back(area);
            }
        }
    }

    std::sort(areas.begin(), areas.end());

    std::cout << areas.size() << std::endl;

    for (auto& item : areas) {
        std::cout << item << " ";
    }


    return 0;
}
