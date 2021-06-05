#include <stdio.h>
#include <vector>

int N;
int a, b;
int M;
std::vector<int> adj[102];
int visited[102];

int dfs (int node, int count) {
    if (node == b)
        return count;

    for (int i = 0; i < adj[node].size(); i++) {
        if (!visited[adj[node][i]]) {
            visited[adj[node][i]] = 1;
            int length = dfs (adj[node][i], count + 1);
            if (length >= 0) return length;
            visited[adj[node][i]] = 0;
        }
    }

    return -1;
}

int main(void) {
    scanf ("%d", &N);
    scanf ("%d %d", &a, &b);
    scanf ("%d", &M);

    int p, q;
    for (int i = 0; i < M; i++) {
        scanf ("%d %d", &p, &q);

        adj[p].push_back (q);
        adj[q].push_back (p);
    }

    int answer = dfs (a, 0);
    printf ("%d\n", answer);

    return 0;
}
