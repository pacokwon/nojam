#include <iostream>

using namespace std;

int arr[110];
int main(void) {
    int n, m, ans = -1;
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum <= m && m - sum < m - ans) {
                    ans = sum;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}