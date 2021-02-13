#include <stack>
#include <stdio.h>

std::stack<int> s;

int main(void) {
    int K;
    scanf("%d", &K);

    int cur, sum = 0;
    for (int i = 0; i < K; i++) {
        scanf("%d", &cur);

        if (cur == 0) {
            int top = s.top();
            sum -= top;
            s.pop();
        } else {
            s.push(cur);
            sum += cur;
        }
    }

    printf("%d", sum);

    return 0;
}
