#include <algorithm>
#include <iostream>
#include <queue>

typedef std::pair<int, int> coord;
typedef std::pair<coord, int> unit;

int N, M;
char maze[110][110];
std::queue<unit> q;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

bool range(int x, int y) {
    return 1 <= x && x <= N && 1 <= y && y <= M;
}

int main(void) {
    std::cin >> N >> M;
    for (int i = 1; i <= N; i++)
        scanf("%s", maze[i] + 1);

    q.push(std::make_pair(std::make_pair(1, 1), 1));
    maze[1][1] = '0';

    while (!q.empty()) {
        unit popped = q.front();
        q.pop();

        if (popped.first.first == N && popped.first.second == M) {
            std::cout << popped.second;
            return 0;
        }

        for (int i = 0; i < 4; i++) {
            int xx = popped.first.first + dx[i];
            int yy = popped.first.second + dy[i];
            if (range(xx, yy) && maze[xx][yy] != '0') {
                maze[xx][yy] = '0';
                q.push(std::make_pair(std::make_pair(xx, yy), popped.second + 1));
            }
        }
    }


    return 0;
}
