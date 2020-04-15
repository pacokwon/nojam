#include <iostream>
#include <functional>
#include <algorithm>

int arr[10];
int main(void) {
    int N;
    std::cin >> N;

    int len = 0;
    while (N != 0) {
        arr[len++] = N % 10;
        N /= 10;
    }
    std::sort(arr, arr + len, std::greater<int>());

    for (int i = 0; i < len; i++)
        printf("%d", arr[i]);

    return 0;
}
