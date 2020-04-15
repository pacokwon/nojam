#include <iostream>

using namespace std;
int main(void) {
    int a, b, sum = 0;
    cin >> a;
    sum += a;

    if (sum >= 100) {
        cout << sum;
        return 0;
    }

    for (int i = 1; i < 10; i++) {
        b = a;
        cin >> a;
        
         
    }

    return 0;
}
