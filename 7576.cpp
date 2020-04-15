#include <algorithm>
#include <iostream>
#include <queue>

typedef std::pair<int, int> pii;
typedef std::pair<pii, int> ppi;

int M, N;
int tomato[1000][1000];
bool check[1000][1000];
int zeros, cnt;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
std::queue<ppi> q;

int range(int x, int y) {
    return 0 <= x && x < N && 0 <= y && y < M;
}

int main(void) {
    std::cin >> M >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            std::cin >> tomato[i][j];
            if (tomato[i][j] == 1) {
                cnt++;
                zeros++;
                check[i][j] = true;
                q.push({ { i, j }, 0 });
            } else if (!tomato[i][j]) {
                zeros++;
            }
        }

    while (!q.empty()) {
        ppi popped = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int xx = popped.first.first + dx[i];
            int yy = popped.first.second + dy[i];

            if (range(xx, yy) && !check[xx][yy] && !tomato[xx][yy]) {
                cnt++;
                check[xx][yy] = true;
                if (cnt == zeros) {
                    std::cout << popped.second + 1;
                    return 0;
                }

                q.push({ { xx, yy }, popped.second + 1 });
            }
        }
    }

    if (cnt == zeros) {
        std::cout << 0;
    } else {
        std::cout << -1;
    }

    return 0;
}
