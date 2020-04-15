#include <iostream>
#include <algorithm>
using namespace std;
int arr[8];
int sarr[8];
int idx[5];
int cnt;
int main(void)
{
    for (int i = 0; i < 8; i++) {cin >> arr[i]; sarr[i] = arr[i];}

    sort(sarr, sarr + 8);

    int sum = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 3; j < 8; j++) {
            if (sarr[j] == arr[i]) {
                sum += sarr[j];
                idx[cnt++] = i;
            }
        }
    }

    cout << sum << endl;
    for (int i = 0; i < 5; i++) cout << idx[i] + 1 << " ";
    
    return 0;
}