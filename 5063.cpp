#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b - c) {
            cout << "do not advertise" << endl;
        } else if (a == b - c) {
            cout << "does not matter" << endl;
        } else {
            cout << "advertise" << endl;
        }
    }

    return 0;
}