#include <iostream>
#include <vector>
#include <algorithm>

typedef std::pair<int, int> pii;

int main(void) {
    int T;
    std::cin >> T;
    std::vector<pii> vec;
    /* vec.push_back(std::make_pair(3, 4)); */
    for (int i = 0; i < T; i++) {
        int x, y;
        std::cin >> x >> y;
        vec.push_back(std::make_pair(x, y));
    }
    std::sort(vec.begin(), vec.end());

    for (pii x : vec) {
        printf("%d %d\n", x.first, x.second);
    }

    return 0;
}
