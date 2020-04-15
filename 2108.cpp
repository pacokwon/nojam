#include <iostream>
#include <algorithm>
using namespace std;

int numbers[500010];
int range[8010];
int main(void) {
    int T;
    /* scanf("%d", &T); */

    /* double sum = 0; */
    /* for (int i = 0; i < T; i++) { */
    /*     scanf("%d", numbers + i); */
    /*     sum += numbers[i]; */
    /*     range[numbers[i] + 4000]++; */
    /* } */

    /* std::sort(numbers, numbers + T); */

    /* sum /= T; */
    /* if (sum >= 0) { */
    /*     printf("%d\n", (int)(sum + 0.5)); */
    /* } else { */
    /*     printf("%d\n", (int)(sum - 0.5)); */
    /* } */

    /* printf("%d\n", numbers[T / 2]); */

    /* int maxval = 0, idx = -1; */
    /* bool found = false; */
    /* for (int i = 0; i < 8001; i++) { */
    /*     if (maxval < range[i]) { */
    /*         maxval = range[i]; */
    /*         idx = i; */
    /*         found = true; */
    /*     } else if (found && maxval == range[i]) { */
    /*         idx = i; */
    /*         break; */
    /*     } */
    /* } */
    /* printf("%d\n", idx - 4000); */
    /* printf("%d", numbers[T - 1] - numbers[0]); */
    cin >> T;

    float sum = 0;
    int maxVal = -4000, minVal = 4000;
    for (int i = 0; i < T; i++) {
        cin >> numbers[i];
        sum += numbers[i];
        range[numbers[i] + 4000]++;
        maxVal = max(maxVal, numbers[i]);
        minVal = min(minVal, numbers[i]);
    }
    float average = sum / T;
    if (average >= 0) cout << int(average + 0.5) << "\n";
    else cout << int(average - 0.5) << "\n";

    sort(numbers, numbers + T);
    cout << numbers[T / 2] << "\n";

    int idx = -1;
    int most = 0;
    bool found = false;
    for (int i = 0; i < 8001; i++) {
        if (most < range[i]) {
            most = range[i];
            idx = i;
            found = false;
        } else if (most == range[i] && !found) {
            idx = i;
            found = true;
        }
    }
    cout << idx - 4000 << "\n";
    cout << maxVal - minVal << "\n";

    return 0;
}
