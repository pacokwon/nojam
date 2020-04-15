#include <iostream>

using namespace std;
int main(void) {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        int C;
        double G;
        double sum = 0.0;
        int csum = 0;
        while (N--) {
            cin >> C >> G;
            sum += C * G;
            csum += C;
        } 

        printf("%d %.1lf\n", csum, sum / csum);
    }

    return 0;
}
