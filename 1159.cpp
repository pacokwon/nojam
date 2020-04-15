#include <iostream>

using namespace std;

int alpha[26];
char name[50];
bool ans;
int main(void) {
    int n;
    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> name;
        alpha[name[0] - 'a']++;
        if (alpha[name[0] - 'a'] >= 5) ans = true;
    }

    if (ans) {
        for (int i = 0; i < 26; i++) {
            if (alpha[i] >= 5) cout << (char)('a' + i);
        }
    } else {
        cout << "PREDAJA";
    }

    return 0;
}