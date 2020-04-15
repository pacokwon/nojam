#include <iostream>

int N;
int max_misplaced;
int arr[110];
int cnt;

int main() {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> arr[i];

    int ans = N - 1;
    for (int i = N - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1])
            ans = i;
        else
            break;
    }

    std::cout << ans;

    return 0;
}

/*

1 3 2 5 4
3 2 5 1 4
2 5 1 3 4
5 1 2 3 4
1 2 3 4 5

3 5 1 4 2
5 1 3 4 2
1 3 4 2 5
3 4 1 2 5
4 1 2 3 5
1 2 3 4 5
*/
