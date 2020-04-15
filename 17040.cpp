#include <iostream>
#include <vector>

int N, M;
std::vector<int> E[110];
int P[110];
int main() {
    std::cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int a, b;
        std::cin >> a >> b;
        E[a].push_back(b); E[b].push_back(a);
    }

    for (int i = 1; i <= N; i++) {
        int g;
        for (g = 1; g <= 4; g++) {
            bool exists = false;
            for (int j = 0; j < E[i].size(); j++) {
                if (P[E[i][j]] == g) {
                    exists = true;
                    break;
                }
            }
            if (!exists) break;
        }
        P[i] = g;
    }

    for (int i = 1; i <= N; i++)
        std::cout << P[i];

    return 0;
}
