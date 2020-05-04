#include <algorithm>
#include <iostream>

int weights[30][30];
bool included[30];
int N;
int ans = 987654321;

void draft(int idx, int acc) {
    if (idx == N) return;

    if (acc == N / 2) {
        int team1 = 0, team2 = 0;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (included[i] && included[j])
                    team1 += weights[i][j] + weights[j][i];
                else if (!included[i] && !included[j])
                    team2 += weights[i][j] + weights[j][i];
            }
        }

        ans = std::min(ans, std::abs(team1 - team2));
        return;
    }

    included[idx] = true;
    draft(idx + 1, acc + 1);
    included[idx] = false;
    draft(idx + 1, acc);
}

int main() {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            std::cin >> weights[i][j];

    draft(0, 0);

    std::cout << ans;

    return 0;
}
