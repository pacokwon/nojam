#include <iostream>

using namespace std;

int main(void) {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int p1 = a * e;
    int p2 = b + (e > c ? (e - c) * d : 0);

    cout << (p1 > p2 ? p2 : p1);

    return 0;
}