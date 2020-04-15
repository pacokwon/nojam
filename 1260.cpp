#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

std::vector<int> ADJ[1010];
std::queue<int> q;
bool check[1010];
int N, M, V;

void clear() {
    for (int i = 1; i <= N; i++)
        check[i] = false;
}

void dfs(int st) {
    std::cout << st << " ";
    int i;
    for (i = 0; i < ADJ[st].size(); i++) {
        if (!check[ADJ[st][i]]) {
            check[ADJ[st][i]] = true;
            dfs(ADJ[st][i]);
        }
    }
}

void bfs(int st) {
    clear();
    q.push(st);
    check[st] = true;

    while (!q.empty()) {
        int p = q.front();
        q.pop();
        std::cout << p << " ";

        for (auto i = 0; i < ADJ[p].size(); i++) {
            if (!check[ADJ[p][i]]) {
                check[ADJ[p][i]] = true;
                q.push(ADJ[p][i]);
            }
        }
    }
    std::cout << std::endl;
}

int main(void) {
    std::cin >> N >> M >> V;

    for (int i = 0; i < M; i++) {
        int p1, p2;
        std::cin >> p1 >> p2;
        ADJ[p1].push_back(p2);
        ADJ[p2].push_back(p1);
    }

    for (int i = 1; i <= N; i++) {
        std::sort(ADJ[i].begin(), ADJ[i].end());
    }

    check[V] = true;
    dfs(V);
    std::cout << std::endl;
    bfs(V);

    return 0;
}
