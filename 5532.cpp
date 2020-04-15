#include <iostream>

using namespace std;
int main(void) {
    int l, a, b, c, d;
    cin >> l >> a >> b >> c >> d;

    int x = (a / c) > (b / d) ? (a / c) + (a % c != 0) : (b / d) + (b % d != 0);

    cout << l - x;

    return 0;
}