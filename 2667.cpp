#include <algorithm>
#include <iostream>
#include <vector>

char mp[30][30];
int N;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int cnt;
std::vector<int> vec;

bool range(int x, int y) {
    return 0 <= x && x < N && 0 <= y && y < N;
}

void dfs(int x, int y) {
    mp[x][y] = '0';
    for (int i = 0; i < 4; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];

        if (range(xx, yy) && mp[xx][yy] != '0') {
            cnt++;
            dfs(xx, yy);
        }
    }
}

int main(void) {
    std::cin >> N;

    for (int i = 0; i < N; i++)
        std::cin >> mp[i];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mp[i][j] != '0') {
                cnt = 1;
                dfs(i, j);
                vec.push_back(cnt);
            }
        }
    }

    std::sort(vec.begin(), vec.end());

    std::cout << vec.size() << std::endl;
    for (size_t i = 0; i < vec.size(); i++)
        std::cout << vec[i] << std::endl;


    return 0;
}
