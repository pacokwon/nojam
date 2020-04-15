#include <iostream>

using namespace std;
long long ans;

int len(int n) {
    int cnt = 0;
    while (n != 0) {
        cnt++;
        n /= 10;
    }

    return cnt;
}

int main(void) {
    int n;
    cin >> n;

    int length = len(n);
    for (int i = 1; i < length; i++) {
        long long pow = 1LL;
        for (int j = 1; j < i; j++) {
            pow *= 10;
        }
        ans += i * 9 * pow;
    }

    long long pow = 1LL;
    for (int i = 1; i < length; i++) pow *= 10;
    ans += (n - pow + 1) * length;

    cout << ans;
    return 0;
}