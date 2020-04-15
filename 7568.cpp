#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

typedef std::pair<int, int> pii;

int main(void) {
    int T;
    scanf("%d", &T);
    int* ranks = (int*)malloc(T * sizeof(int));

    std::vector<pii> vec;

    int weight, height;
    for (int i = 0; i < T; i++) {
        scanf("%d%d", &weight, &height);
        vec.push_back(std::make_pair(weight, height));
    }

    for (int i = 0; i < vec.size(); i++) {
        for (int j = i + 1; j < vec.size(); j++) {
            /* printf("%d %d %d %d: ", vec[i].first, vec[i].second, vec[j].first, vec[j].second); */
            if (vec[i].first > vec[j].first && vec[i].second > vec[j].second) {
                ranks[j]++;
            }
            else if (vec[i].first < vec[j].first && vec[i].second < vec[j].second) {
                ranks[i]++;
            }
        }
    }

    for (int i = 0; i < T; i++)
        printf("%d ", ranks[i] + 1);

    return 0;
}
