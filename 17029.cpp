#include <iostream>
#include <string>
#include <vector>

int N, cnt, ans;
std::vector<std::string> vec[110];

int common(int i, int j) {
    int cnt = 0;
    std::vector<std::string> &v1 = vec[i], &v2 = vec[j];
    for (int i = 0; i < v1.size(); i++)
        for (int j = 0; j < v2.size(); j++)
            if (v1[i] == v2[j])
                cnt++;
    return cnt;
}

int main() {
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::string animal;
        int n_args;

        std::cin >> animal;
        std::cin >> n_args;
        for (int j = 0; j < n_args; j++) {
            std::string trait;
            std::cin >> trait;
            vec[i].push_back(trait);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            ans = std::max(ans, common(i, j));
        }
    }

    std::cout << ans + 1;

    return 0;
}
