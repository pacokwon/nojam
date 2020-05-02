#include <algorithm>
#include <iostream>

typedef std::pair<int, int> pii;

int N;
pii queens[15];
int ans;

int insight(int x1, int y1, int x2, int y2) {
    int xdiff = x1 > x2 ? x1 - x2 : x2 - x1;
    int ydiff = y1 > y2 ? y1 - y2 : y2 - y1;

    return !xdiff || !ydiff || (xdiff == ydiff);
}

int vulnerable(int x, int y, int size) {
    for (int i = 0; i < size; i++) {
        if (insight(x, y, queens[i].first, queens[i].second))
            return 1;
    }

    return 0;
}

void putqueen(int row) {
    if (row == N) {
        ans++;
        return;
    }

    for (int i = 0; i < N; i++) {
        if (!vulnerable(row, i, row)) {
            queens[row] = std::make_pair(row, i);
            putqueen(row + 1);
        }
    }
}

int main() {
    std::cin >> N;

    putqueen(0);
    std::cout << ans;

    return 0;
}
