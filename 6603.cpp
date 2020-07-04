#include <iostream>
#include <algorithm>

int nums[15];
int num_path[15];
int N;

void btrack(int cnt) {
    if (cnt == 6) {
        for (int i = 0; i < 6; i++)
            std::cout << nums[num_path[i]] << " ";
        std::cout << "\n";
        return;
    }

    int last = cnt == 0 ? -1 : num_path[cnt - 1];

    for (int i = last + 1; i < N; i++) {
        num_path[cnt] = i;
        btrack(cnt + 1);
    }
}

int main(void) {

    while (true) {
        std::cin >> N;

        if (!N) break;

        for (int i = 0; i < N; i++)
            std::cin >> nums[i];

        btrack(0);
        std::cout << std::endl;
    }

    return 0;
}
