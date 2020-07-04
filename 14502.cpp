#include <algorithm>
#include <iostream>
#include <vector>

typedef std::pair<int, int> point;

int N, M;
int lab[10][10];
int labcopy[10][10];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
std::vector<point> vec;

bool range(int x, int y) {
    return (0 <= x && x < N && 0 <= y && y < M) && !lab[x][y];
}

void copy() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            lab[i][j] = labcopy[i][j];
}

void dfs(int x, int y) {
    lab[x][y] = 3;

    for (int k = 0; k < 4; k++) {
        int xx = x + dx[k];
        int yy = y + dy[k];

        if (!range(xx, yy))
            continue;

        dfs(xx, yy);
    }
}

int main(void) {
    std::cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cin >> labcopy[i][j];
            if (!labcopy[i][j])
                vec.push_back(std::make_pair(i, j));
        }
    }

    int ans = 0;

    for (size_t i = 0; i < vec.size(); i++) {
        for (size_t j = i + 1; j < vec.size(); j++) {
            for (size_t k = j + 1; k < vec.size(); k++) {
                copy();

                lab[vec[i].first][vec[i].second] = 1;
                lab[vec[j].first][vec[j].second] = 1;
                lab[vec[k].first][vec[k].second] = 1;

                for (int x = 0; x < N; x++)
                    for (int y = 0; y < M; y++)
                        if (lab[x][y] == 2)
                            dfs(x, y);

                int cnt = 0;
                for (int x = 0; x < N; x++)
                    for (int y = 0; y < M; y++)
                        if (!lab[x][y])
                            cnt++;

                if (ans < cnt) {
                    ans = cnt;
                }
            }
        }
    }

    std::cout << ans;
    return 0;
}
