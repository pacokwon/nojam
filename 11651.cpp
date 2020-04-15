#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int, int> pii;

bool comparePairs(const pii& lhs, const pii& rhs) {
    return lhs.second == rhs.second
        ? lhs.first < rhs.first
        : lhs.second < rhs.second;
}

int main(void) {
    int T;
    cin >> T;

    vector<pii> vec;
    int a, b;
    for (int i = 0; i < T; i++) {
        cin >> a >> b;
        vec.push_back(make_pair(a, b));
    }

    sort(vec.begin(), vec.end(), comparePairs);
    for (int i = 0; i < T; i++) {
        printf("%d %d\n", vec[i].first, vec[i].second);
    }

    return 0;
}
