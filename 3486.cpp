#include <iostream>

using namespace std;

int rev(int n) {
    int sum = 0;
    while (n != 0) {
        sum *= 10;
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(void) {
    int n;
    cin >> n;

    while (n--) {
        int a, b;
        cin >> a >> b;
        cout << rev(rev(a) + rev(b)) << endl;
    }

    return 0;
}