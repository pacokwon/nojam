#include <queue>
#include <iostream>
#include <algorithm>

int T;
// 1000 <= n <= 9999
bool visited[9010];
bool sieve[10000];

typedef std::pair<int, int> pii;

void initSieve() {
    for (int i = 2; i <= 10000; i++)
        sieve[i] = true;

    for (int i = 2; i <= 100; i++) {
        if (sieve[i] == 0)
            continue;

        for (int j = i * 2; j <= 10000; j += i)
            sieve[j] = false;
    }
}

void setVisited(int n) {
    visited[n - 1000] = true;
}

bool getVisited(int n) {
    return visited[n - 1000];
}

int bfs(int source, int target) {
    std::queue<pii> q;

    for (int i = 1000; i < 10000; i++)
        visited[i - 1000] = false;

    q.push(std::make_pair(0, source));
    setVisited(source);

    while (!q.empty()) {
        pii popped = q.front();
        int num = popped.second;
        q.pop();
        /* std::cout << "num: " << num << std::endl; */

        if (popped.second == target)
            return popped.first;

        // 4th digit
        for (int i = 1; i < 10; i += 2) {
            if (num % 10 == i) continue;

            int n = num / 10 * 10 + i;

            if (!getVisited(n) && sieve[n]) {
                /* std::cout << n << " pushed" << std::endl; */
                q.push(std::make_pair(popped.first + 1, n));
                setVisited(n);
            }
        }

        // 3rd digit
        for (int i = 0; i < 10; i++) {
            if (num / 10 % 10 == i) continue;
            int n = num / 100 * 100 + i * 10 + num % 10;
            if (!getVisited(n) && sieve[n]) {
                /* std::cout << n << " pushed" << std::endl; */
                q.push(std::make_pair(popped.first + 1, n));
                setVisited(n);
            }
        }

        // 2nd digit
        for (int i = 0; i < 10; i++) {
            // 1234
            if (num / 100 % 10 == i) continue;
            int n = num / 1000 * 1000 + i * 100 + num % 100;
            if (!getVisited(n) && sieve[n]) {
                /* std::cout << n << " pushed" << std::endl; */
                q.push(std::make_pair(popped.first + 1, n));
                setVisited(n);
            }
        }

        // 1st digit
        for (int i = 1; i < 10; i++) {
            // 1234
            if (num / 1000 == i) continue;
            int n = i * 1000 + num % 1000;
            if (!getVisited(n) && sieve[n]) {
                /* std::cout << n << " pushed" << std::endl; */
                q.push(std::make_pair(popped.first + 1, n));
                setVisited(n);
            }
        }
    }

    return -1;
}

/*
3
1033 8179
1373 8017
1033 1033

1
1033 8179
*/

int main(void) {
    std::cin >> T;

    initSieve();

    while (T--) {
        int source, target;
        std::cin >> source >> target;

        int result = bfs(source, target);

        if (result == -1) {
            std::cout << "Impossible" << std::endl;
        } else {
            std::cout << result << std::endl;
        }
    }

    return 0;
}
