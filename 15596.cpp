#include <iostream>
#include <vector>

long long sum(std::vector<int> &a);

long long sum(std::vector<int> &a) {
    long long _sum = 0;
    for (int x : a) {
        _sum += x;
    }
    return _sum;
}
