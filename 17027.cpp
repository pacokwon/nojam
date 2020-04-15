#include <algorithm>
#include <iostream>
#include <fstream>

int N;
/* std::ofstream fout("shell.out"); */
/* std::ifstream fin("shell.in"); */
int ans1, ans2, ans3;
int main() {
    std::cin >> N;

    int case1 = 1, case2 = 2, case3 = 3;
    int st, en, g;
    for (int i = 0; i < N; i++) {
        std::cin >> st >> en >> g;
        /* std::cout << st << en << g << std::endl; */

        if (case1 == st)
            case1 = en;
        else if (case1 == en)
            case1 = st;

        if (case2 == st)
            case2 = en;
        else if (case2 == en)
            case2 = st;

        if (case3 == st)
            case3 = en;
        else if (case3 == en)
            case3 = st;

        if (g == case1) {
            ans1++;
        } else if (g == case2) {
            ans2++;
        } else if (g == case3) {
            ans3++;
        }
    }

    std::cout << std::max(ans1, std::max(ans2, ans3));
    /* std::cout << std::max(ans1, std::max(ans2, ans3)); */

    return 0;
}
