#include <algorithm>
#include <iostream>

int A[3];
int main() {
    std::cin >> A[0] >> A[1] >> A[2];

    if (A[0] > A[1]) std::swap(A[0], A[1]);
    if (A[1] > A[2]) std::swap(A[1], A[2]);
    if (A[0] > A[1]) std::swap(A[0], A[1]);

    if (A[0] + 2 == A[2])
        std::cout << "0\n";
    else if (A[0] + 2 == A[1] || A[1] + 2 == A[2])
        std::cout << "1\n";
    else
        std::cout << "2\n";
    std::cout << std::max(A[1] - A[0], A[2] - A[1]) - 1;

    return 0;
}
