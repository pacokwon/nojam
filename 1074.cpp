#include <iostream>
#include <iomanip>

int N, r, c;
int arr[100][100];
int cnt;

void Z(int x, int y, int size) {
    if (size == 2) {
        arr[x][y] = cnt++;
        arr[x][y + 1] = cnt++;
        arr[x + 1][y] = cnt++;
        arr[x + 1][y + 1] = cnt++;
        return;
    }

    Z(x, y, size / 2);
    Z(x, y + size / 2, size / 2);
    Z(x + size / 2, y, size / 2);
    Z(x + size / 2, y + size / 2, size / 2);
}

int main(void) {
    std::cin >> N >> r >> c;
    int len = 1;
    for (int i = 0; i < N; i++)
        len *= 2;
    Z(0, 0, len);
    /* for (int i = 0; i < len; i++) { */
    /*     for (int j = 0; j < len; j++) { */
    /*         std::cout << std::setw(4) << arr[i][j]; */
    /*     } */
    /*     std::cout << std::endl; */
    /* } */
    std::cout << arr[r][c];

    return 0;
}

