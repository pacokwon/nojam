#include <iostream>

using namespace std;

int main(void) {
    int a, b, c, d, sum1 = 0, sum2 = 0;
    cin >> a >> b >> c >> d;
    sum1 = a + b + c + d;
    cin >> a >> b >> c >> d;
    sum2 = a + b + c + d;

    cout << ( sum1 > sum2 ? sum1 : sum2 );
    return 0;
}
