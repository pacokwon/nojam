#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

typedef std::pair<int, int> pii;
std::vector<pii> vec;
std::vector<int> dp;
int N;

int main() {
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        int a, b;
        std::cin >> a >> b;
        vec.push_back(std::make_pair(a, b));
    }

    std::sort(vec.begin(), vec.end());

    dp.push_back(vec[0].second);
    for (size_t i = 1; i < vec.size(); i++) {
        if (dp.back() > vec[i].second) {
            auto lower = std::lower_bound(dp.begin(), dp.end(), vec[i].second);
            *lower = vec[i].second;
        } else {
            dp.push_back(vec[i].second);
        }
    }

    std::cout << vec.size() - dp.size();

    return 0;
}
