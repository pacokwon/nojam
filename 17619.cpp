#include <algorithm>
#include <iostream>

typedef std::pair<int, int> pii;

typedef struct {
    int x1, x2, num;
} Log;

int N, Q;
int root[100010];
Log logs[100010];

int Find(int x) {
    if (root[x] == x)
        return x;
    else
        return Find(root[x]);
}

void Union(int x, int y) {
    x = Find(x);
    y = Find(y);

    root[y] = x;
}

bool cmp(Log a, Log b) {
    return a.x1 < b.x1;
}

int main(void) {
    std::cin >> N >> Q;

    for (int i = 1; i <= N; i++)
        root[i] = i;

    for (int i = 1; i <= N; i++) {
        int x1, x2, y;
        std::cin >> x1 >> x2 >> y;
        logs[i] = { x1, x2, i };
    }

    std::sort(logs + 1, logs + N + 1, cmp);

    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            if (logs[j].x1 <= logs[i].x2) {
                Union(logs[i].num, logs[j].num);
            }
        }
    }

    /* for (int i = 1; i <= N; i++) { */
    /*     std::cout << "i: " << i << "\t" << root[i] << std::endl; */
    /* } */

    int f, t;
    for (int i = 0; i < Q; i++) {
        std::cin >> f >> t;
        if (Find(f) == Find(t)) {
            std::cout << 1 << std::endl;
        } else {
            std::cout << 0 << std::endl;
        }
    }

    return 0;
}
