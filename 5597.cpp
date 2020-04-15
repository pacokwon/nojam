#include <iostream>

using namespace std;
bool att[31];
int main(void) {
    for (int i = 0; i < 28; i++) {
        int n;
        cin >> n;
        att[n] = true;
    }

    for (int i = 1; i <= 30; i++) {
        if (!att[i]) cout << i << endl;
    }

    return 0;
}