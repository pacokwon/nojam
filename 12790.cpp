#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    int stats[10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> stats[j]; 
        }

        int hp = stats[0] + stats[4] < 1 ? 1 : stats[0] + stats[4];
        int mp = stats[1] + stats[5] < 1 ? 1 : stats[1] + stats[5];
        int at = stats[2] + stats[6] < 0 ? 0 : stats[2] + stats[6];
        int stat = hp + mp * 5 + at * 2 + (stats[3] + stats[7]) * 2;

        cout << stat << endl; 
    }

    return 0;
}
