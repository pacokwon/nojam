#include <iostream>

using namespace std;

int main(void) {
    int a, b, c;

    do {
        cin >> a >> b>> c;

        if (!a && !b && !c) break;

        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }

    } while (true);

    return 0;
}
