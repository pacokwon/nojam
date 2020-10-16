#include <iostream>
#include <vector>
#include <queue>

int N, M, X;
std::vector<std::vector<int>> forwardEdges;
std::vector<std::vector<int>> backwardEdges;
int frontNum, backNum;

int bfs_forward(int start) {
    std::vector<bool> visited(N + 1, false);

    int length = 0;
    std::queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int popped = q.front();
        q.pop();

        for (int i = 0; i < forwardEdges[popped].size(); i++) {
            int v = forwardEdges[popped][i];

            if (!visited[v]) {
                length++;
                q.push(v);
                visited[v] = true;
            }
        }
    }

    return length;
}

int bfs_backward(int start) {
    std::vector<bool> visited(N + 1, false);

    int length = 0;
    std::queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int popped = q.front();
        q.pop();

        for (int i = 0; i < backwardEdges[popped].size(); i++) {
            int v = backwardEdges[popped][i];

            if (!visited[v]) {
                length++;
                q.push(v);
                visited[v] = true;
            }
        }
    }

    return length;
}


int main(void) {
    std::cin >> N >> M >> X;

    forwardEdges = std::vector<std::vector<int>>(N + 1);
    backwardEdges = std::vector<std::vector<int>>(N + 1);

    int u, v;
    for (int i = 0; i < M; i++) {
        std::cin >> u >> v;
        forwardEdges[u].push_back(v);
        backwardEdges[v].push_back(u);
    }

    std::cout << 1 + bfs_backward(X) << " " << N - bfs_forward(X);

    return 0;
}
